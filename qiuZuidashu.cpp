#include <iostream>

using namespace std;


//求两个或者三个数中的最大值，用带有默认参数的函数实现

int main (){

    int max(int a,int b,int c=0);
    int a,b,c;
    cin >> a >> b >> c ;
    cout << "max(a,b,c)=" << max(a,b,c) <<endl;
    cout << "max(a,b)=" << max (a,b) << endl;
    // cout << "max(a,c)" << max(a,c) <<endl;


    return 0;
    
}

int max(int a,int b,int c  = 0){
    if (b>a) a=b;
    if (c>a) a=c;
    return a;
}