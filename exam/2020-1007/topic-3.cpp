#include <iostream>
#define Pi 3.14
using namespace std;

/*
  ���һ������area()����κ�Բ�ε������Բ��ֻ��Ҫ�뾶��������Ҫ��͸ߡ�
  ��ʹ�ú������أ���ʾ:��Բ�����ʱ��Ҫ����һ��pi���������ҽ��Ӧ����һ��������;
  ���εĿ�͸�Ϊ�����������Ӧ����������
*/

float area(float radius);
int area(int width, int height);

int main() {

	float r,circleArea;
	cout << "������뾶:" << endl;
	cin >> r;
	circleArea = area(r); 
	cout << "Բ�����Ϊ��" << circleArea << endl;

	int w, h, rectangleArea;
	cout << "\n��������εĿ�͸ߣ�" << endl;
	cin >> w >> h;
	rectangleArea = area(w, h);
	cout << "�������Ϊ��" << rectangleArea << endl;

	return 0;

}

float area(float radius) {
	return Pi * radius * radius;
}
int area(int width, int height) {
	return width * height;
}
