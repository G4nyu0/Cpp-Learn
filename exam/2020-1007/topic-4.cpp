#include <iostream>

using namespace std;

/*
	使用带默认参数值的函数，编写函数实现对n个数字的从小到大排序，数字用数组保存,作为参数传给被调函数。
	函数默认功能是实现升序排列，可以使用一个参数，参数默认为'A'升序排列，当将其指定为'D'时表示降序排列。
*/

void sort1(int* a, int n, char tag = 'A');

int main(){
	

    const int n = 4;
    int a[n];
    cout << "请输入" << n << "个数：" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    cout << "数组升序排序结果(Default)：" << endl;
    sort1(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << '\t' ;
    }

    cout << '\n';

    cout << "数组降序排序结果：" << endl;
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











