//#include<opencv2/opencv.hpp>
//#include<iostream>
//using namespace cv;
//int main() {
//	cv::Mat src = imread("D://18.jpg",0);
//	cv::Mat canny;
//	
//	Canny(src, canny, 100, 125, 3, false);
//	std::vector<cv::Vec2f> lines;
//	
//	cv::HoughLines(canny, lines, 1, CV_PI / 180, 100);
//	
//
//	std::vector<cv::Vec2f>::iterator it = lines.begin();
//	for (; it != lines.end(); ++it) {
//		float rho = (*it)[0], theta = (*it)[1];
//		cv::Point pt1, pt2;
//		double a = cos(theta);
//		double b = sin(theta);
//		double x0 = a * rho;
//		double y0 = b * rho;
//		pt1.x = cv::saturate_cast<int>(x0 + 1000 * (-b));
//		pt1.y = cv::saturate_cast<int>(y0 + 1000 * (a));
//		pt2.x = cv::saturate_cast<int>(x0 - 1000 * (-b));
//		pt2.y = cv::saturate_cast<int>(y0 - 1000 * (a));
//		cv::line(src, pt1, pt2, cv::Scalar(255, 255, 255), 1, CV_AA);
//	}
//			
//	for (std::vector<Vec2f>::iterator m = lines.begin();
//		m != lines.end(); m++)
//	{	
//		std::cout << *m <<std:: endl;
//	}
//		imshow("canny", canny);
//		imshow("src", src);
//	
//	waitKey(0);
//	return 0;
//}