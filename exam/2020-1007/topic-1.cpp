#include <iostream>

using namespace std;

//��д������֮�͵ĺ�����Ҫ��ʹ�ú������أ������������������������ȡ�˫�����������ֵĺ͡�

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
	cout << "����������������" << endl;
	cin >> a1 >> b1;
	x1 = sum1(a1, b1);
	cout << "������Ϊ��" << x1  << endl;
	

	long a2, b2;
	cout << "\n������������������" << endl;
	cin >> a2 >> b2;
	x2 = sum1(a2, b2);
	cout << "��������Ϊ��" << x2 <<endl;
	

	float a3, b3;
	cout << "\n����������������ʵ����" << endl;
	cin >> a3 >> b3;
	x3 = sum1(a3, b3);
	cout << "��������Ϊ��" << x3  << endl;
	

	double a4, b4;
	cout << "\n����������˫����ʵ����" << endl;
	cin >> a4 >> b4;
	x4 = sum1(a4, b4);
	cout << "˫��������Ϊ��" << x4  << endl;



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
