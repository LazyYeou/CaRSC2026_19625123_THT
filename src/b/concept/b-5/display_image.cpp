#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;

int main()
{
    Mat img = imread("../kapan_yh.jpeg", IMREAD_COLOR);
    Mat tf_img, hsv;

    if (img.empty())
    {
        std::cout << "error" << std::endl;
        return -1;
    }

    Point2f center(img.cols / 2.0, img.rows / 2.0);
    double angle = 30.0;
    double scale = 0.7;

    Mat rot = getRotationMatrix2D(center, angle, scale);
    warpAffine(img, tf_img, rot, img.size());

    cvtColor(tf_img, hsv, COLOR_BGR2HSV);

    imwrite("./kapan_yh_transformed.jpg", hsv);
    imshow("display", hsv);
    int k = waitKey(0);

    return 0;
}