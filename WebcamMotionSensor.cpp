#include <opencv2/opencv.hpp>

int main() {
    cv::VideoCapture cap("http://your_camera_ip_address/video"); // Replace with your camera's IP address
    
    if (!cap.isOpened()) {
        std::cout << "Error: Could not connect to the camera." << std::endl;
        return -1;
    }

    cv::Mat frame, prevFrame, diffFrame, grayFrame;
    cap.read(prevFrame);
    cv::cvtColor(prevFrame, prevFrame, cv::COLOR_BGR2GRAY);

    while (true) {
        cap.read(frame);
        cv::cvtColor(frame, grayFrame, cv::COLOR_BGR2GRAY);

        cv::absdiff(prevFrame, grayFrame, diffFrame);
        cv::threshold(diffFrame, diffFrame, 30, 255, cv::THRESH_BINARY);

        cv::imshow("Motion Detector", diffFrame);

        prevFrame = grayFrame.clone();

        if (cv::waitKey(1) == 27) // Press ESC to exit
            break;
    }

    cap.release();
    cv::destroyAllWindows();

    return 0;
}
