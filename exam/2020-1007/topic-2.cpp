#include <iostream>

using namespace std;

//编写两个数平方之和的函数，要求使用函数模板，能求整数、长整数、双精度类型数字的和。

template <typename T>
T sum2(T a,T b) {
	T c;
	c = a * a + b * b;
	return c;
}

int main() {

	//整数
	int i1, i2,i;
	cout << "请输入两个整数:" << endl;
	cin >> i1 >> i2;

	//长整数
	long l1, l2, l;
	cout << "请输入两个长整数:" << endl;
	cin >> l1 >> l2;

	//双精度
	double d1, d2, d;
	cout << "请输入两个双精度实数:" << endl;
	cin >> d1 >> d2;

	i = sum2(i1, i2);
	l = sum2(l1, l2);
	d = sum2(d1, d2);

	cout << "整数平方之和：" << i << endl;
	cout << "长整数平方之和：" << l << endl;
	cout << "双精度实数平方之和：" << d << endl;
}