#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <atomic>

std::atomic<bool> stop_thread(false); // flag

// fungsi simulasi stream video
void receive_video_frame()
{
    while (!stop_thread)
    {
        std::cout << "Receiving video frame..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
}

// fungsi simulasi menerima data telemetri
void receive_telemetry_data()
{
    std::ifstream file("../../../lampiran/telemetry.txt");
    std::string line;
    int line_number = 0;

    while (!stop_thread && std::getline(file, line))
    {
        std::cout << "telemetry data: " << line << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }

    if (file.eof())
    {
        std::cout << "eof." << std::endl;
    }
}

int main()
{
    std::thread video_thread(receive_video_frame);
    std::thread telemetry_thread(receive_telemetry_data);
    std::this_thread::sleep_for(std::chrono::seconds(10));
    stop_thread = true;

    video_thread.join();
    telemetry_thread.join();

    return 0;
}
