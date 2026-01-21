#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    VideoCapture cap("../circle.mp4");

    if (!cap.isOpened())
    {
        cout << "cant load" << endl;
        return -1;
    }

    int width = cap.get(CAP_PROP_FRAME_WIDTH);
    int height = cap.get(CAP_PROP_FRAME_HEIGHT);
    int fps = cap.get(CAP_PROP_FPS);

    VideoWriter writer("output.avi", VideoWriter::fourcc('M', 'J', 'P', 'G'), fps, Size(width, height));

    Mat frame, hsv, mask;

    while (true)
    {
        cap >> frame;
        if (frame.empty())
            break;

        cvtColor(frame, hsv, COLOR_BGR2HSV);

        Scalar lower_red_bot(0, 120, 70);
        Scalar upper_red_bot(10, 255, 255);

        Scalar lower_red_top(160, 120, 70);
        Scalar upper_red_top(180, 255, 255);

        Mat mask1, mask2;
        inRange(hsv, lower_red_bot, upper_red_bot, mask1);
        inRange(hsv, lower_red_top, upper_red_top, mask2);

        Mat final_mask;
        bitwise_or(mask1, mask2, final_mask);

        vector<vector<Point>> contours;
        findContours(final_mask, contours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

        for (size_t i = 0; i < contours.size(); i++)
        {
            if (contourArea(contours[i]) > 500)
            {
                drawContours(frame, contours, (int)i, Scalar(255, 0, 0), 2);

                Rect bBox = boundingRect(contours[i]);

                rectangle(frame, bBox, Scalar(0, 255, 0), 3);
                putText(frame, "terdeteksi kau suki", Point(bBox.x, bBox.y - 10),
                        FONT_HERSHEY_SIMPLEX, 0.5, Scalar(0, 255, 0), 2);
            }
        }
        writer.write(frame);
        imshow("tracking display", frame);

        if (waitKey(30) == 27)
            break;
    }

    cap.release();
    writer.release();
    destroyAllWindows();

    return 0;
}