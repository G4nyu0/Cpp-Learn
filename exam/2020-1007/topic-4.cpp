#include <iostream>

using namespace std;

/*
	ʹ�ô�Ĭ�ϲ���ֵ�ĺ�������д����ʵ�ֶ�n�����ֵĴ�С�����������������鱣��,��Ϊ������������������
	����Ĭ�Ϲ�����ʵ���������У�����ʹ��һ������������Ĭ��Ϊ'A'�������У�������ָ��Ϊ'D'ʱ��ʾ�������С�
*/

void sort1(int* a, int n, char tag = 'A');

int main(){
	

    const int n = 4;
    int a[n];
    cout << "������" << n << "������" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    cout << "��������������(Default)��" << endl;
    sort1(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << '\t' ;
    }

    cout << '\n';

    cout << "���齵����������" << endl;
    sort1(a, n,'D');
    for (int i = 0; i < n; i++) {
        cout << a[i] << '\t' ;
    }
    
    cout << endl;
    
    return 0;
}

void sort1(int* a, int n,char tag )
{
    int i, j;
    int t;
    for (i = 0; i < n; i++)
    {
        if (tag == 'A') {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
        else {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] < a[j])
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
    }
}











