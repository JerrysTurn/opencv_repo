#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	cout << "Hello OpenCV " << CV_VERSION << endl;

	Mat img;
	img = imread("lenna.bmp",IMREAD_GRAYSCALE); // 프로젝트 다이렉터리 내 사진파일을 읽어들인다, FLAG 열거형 상수로 인자지정 가능

	if (img.empty()) {
		cerr << "Image load failed!" << endl; // cerr 의 경우 cout 과 달리 버퍼를 거치지 않고 바로 출력한다.
		return -1;
	}
	
	namedWindow("image"); // 윈도우 창 생성, image 는 이름
	imshow("image", img); // img 이름의 창에 img 객체 출력

	waitKey(0); // 키보드 입력대기
	return 0;
}