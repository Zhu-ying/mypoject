#include <opencv2/opencv.hpp>
using namespace cv;

int main(int argc,char **argv)
{
	Mat img = imread("111.jpg");
	imshow("my picture",img);
	waitKey(0);
}
