#include <iostream>

using namespace std;

//编写两个数之和的函数，要求使用函数重载，能求整数、长整数、单精度、双精度类型数字的和。

int sum1(int x, int y);
long sum1(long x, long y);
float sum1(float x, float y);
double sum1(double x, double y);

int main() {
	
	int x1;
	long x2;
	float x3;
	double x4;

	int a1, b1;
	cout << "请输入两个整数：" << endl;
	cin >> a1 >> b1;
	x1 = sum1(a1, b1);
	cout << "整数和为：" << x1  << endl;
	

	long a2, b2;
	cout << "\n请输入两个长整数：" << endl;
	cin >> a2 >> b2;
	x2 = sum1(a2, b2);
	cout << "长整数和为：" << x2 <<endl;
	

	float a3, b3;
	cout << "\n请输入两个单精度实数：" << endl;
	cin >> a3 >> b3;
	x3 = sum1(a3, b3);
	cout << "浮点数和为：" << x3  << endl;
	

	double a4, b4;
	cout << "\n请输入两个双精度实数：" << endl;
	cin >> a4 >> b4;
	x4 = sum1(a4, b4);
	cout << "双精度数和为：" << x4  << endl;



	return 0;


}

int sum1(int x,int y) {
	return x + y;
}

long	sum1(long x, long y) {
	return x + y;
}

float	sum1(float x, float y) {
	return x + y;
}

double	sum1(double x, double y) {
	return x + y;
}
