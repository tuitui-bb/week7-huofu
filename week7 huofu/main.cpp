//#include<opencv2/opencv.hpp>
//#include<iostream>
//using namespace cv;
//int main() {
//	double angle= 40;
//	cv::Mat src = imread("D://lean.jpg", 1);
//	cv::Point2f center(src.cols / 2.0,src.rows/2.0);
//	cv::Mat rot = cv::getRotationMatrix2D(center,angle,1.0);
//	cv::Rect bbox = cv::RotatedRect(center,src.size(),angle).boundingRect();
//	rot.at<double>(0,2) += bbox.width/2.0 - center.x;
//	rot.at<double>(1, 2) += bbox.height/2.0 - center.y;
//	Mat dst;
//	cv::warpAffine(src, dst, rot, bbox.size());
//
//	cv::imshow("src", src);
//	cv::imshow("dst", dst);
//	waitKey(0);
//	return 0;
//}