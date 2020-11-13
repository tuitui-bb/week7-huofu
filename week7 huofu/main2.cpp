#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main() {
	cv::Mat src = imread("D://18.jpg", 0);
	cv::Mat canny;

	Canny(src, canny, 100, 125, 3, false);
	std::vector<cv::Vec4i> lines;

	cv::HoughLinesP(canny, lines, 1, CV_PI / 180, 50,15,10);



	
	for (size_t i=0; i < lines.size(); i++) {
		Vec4i l = lines[i];
		
		cv::line(src, Point(l[0],l[1]), Point(l[2],l[3]), cv::Scalar(250, 255, 255), 1, CV_AA);
	}

	for (std::vector<Vec4i>::iterator m = lines.begin();
		m != lines.end(); m++)
	{
		std::cout << *m << std::endl;
	}
	imshow("canny", canny);
	imshow("src", src);

	waitKey(0);
	return 0;
}