#include <iostream>
#include <opencv2/opencv.hpp>


using namespace cv;
int main() {
    std::cout << "OpenCV version is " << CV_VERSION << std::endl;
    VideoCapture capture(0);
    std::cout<<capture.get(CAP_PROP_FPS)<< " FPS" <<std::endl;
    std::cout<<capture.getBackendName()<<std::endl;
    std::cout<<capture.set(CAP_PROP_FRAME_WIDTH, 1280)<< " CAP_PROP_FRAME_WIDTH: "<< capture.get(CAP_PROP_FRAME_WIDTH) <<std::endl;
    std::cout<<capture.set(CAP_PROP_FRAME_HEIGHT, 480)<< " CAP_PROP_FRAME_HEIGHT: "<< capture.get(CAP_PROP_FRAME_HEIGHT) <<std::endl;
    Mat image;
    Mat new_image;
    while (cvWaitKey(1)!='q'){
        capture>>image;
        imshow("window", image);
    }
    std::cout<<image.rows<<"x"<<image.cols<<" end!\n";

    return 0;
}