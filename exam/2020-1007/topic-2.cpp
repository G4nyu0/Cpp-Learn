#include <iostream>

using namespace std;

//��д������ƽ��֮�͵ĺ�����Ҫ��ʹ�ú���ģ�壬������������������˫�����������ֵĺ͡�

template <typename T>
T sum2(T a,T b) {
	T c;
	c = a * a + b * b;
	return c;
}

int main() {

	//����
	int i1, i2,i;
	cout << "��������������:" << endl;
	cin >> i1 >> i2;

	//������
	long l1, l2, l;
	cout << "����������������:" << endl;
	cin >> l1 >> l2;

	//˫����
	double d1, d2, d;
	cout << "����������˫����ʵ��:" << endl;
	cin >> d1 >> d2;

	i = sum2(i1, i2);
	l = sum2(l1, l2);
	d = sum2(d1, d2);

	cout << "����ƽ��֮�ͣ�" << i << endl;
	cout << "������ƽ��֮�ͣ�" << l << endl;
	cout << "˫����ʵ��ƽ��֮�ͣ�" << d << endl;
}