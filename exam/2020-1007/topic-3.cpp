#include <iostream>
#define Pi 3.14
using namespace std;

/*
  设计一个函数area()求矩形和圆形的面积，圆形只需要半径，矩形需要宽和高。
  请使用函数重载，提示:求圆形面积时需要设置一个pi常量，并且结果应该是一个浮点数;
  矩形的宽和高为整数，其面积应该是整数。
*/

float area(float radius);
int area(int width, int height);

int main() {

	float r,circleArea;
	cout << "请输入半径:" << endl;
	cin >> r;
	circleArea = area(r); 
	cout << "圆的面积为：" << circleArea << endl;

	int w, h, rectangleArea;
	cout << "\n请输入矩形的宽和高：" << endl;
	cin >> w >> h;
	rectangleArea = area(w, h);
	cout << "矩形面积为：" << rectangleArea << endl;

	return 0;

}

float area(float radius) {
	return Pi * radius * radius;
}
int area(int width, int height) {
	return width * height;
}
