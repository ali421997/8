// Include libraries
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main(void) {

	Mat testImage = imread("number_zero.jpg", 1);

	cout << testImage.at<Vec3b>(0, 0);

	testImage.at<Vec3b>(0, 0) = Vec3b(0, 255, 255);
	imwrite("zero1.png", testImage);

	testImage.at<Vec3b>(1, 1) = Vec3b(255, 255, 0);
	imwrite("zero2.png", testImage);
	
	testImage.at<Vec3b>(2, 2) = Vec3b(255, 0, 255);
	imwrite("zero3.png", testImage);	

	testImage(Range(0, 3), Range(0, 3)).setTo(Scalar(255, 0, 0));

	testImage(Range(3, 6), Range(0, 3)).setTo(Scalar(0, 255, 0));

	testImage(Range(6, 9), Range(0, 3)).setTo(Scalar(0, 0, 255));
	imwrite("zerorange.png", testImage);
	
	return 0;
}
