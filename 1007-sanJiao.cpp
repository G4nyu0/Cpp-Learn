#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

//求三角形面积
int main() {
    double a,b,c;
    cout << "请输入三条边的边长：a,b,c" << endl;
    cin >> a >> b >> c ;
    if (a+b>c && b+c >a && a+c > b)
    {
        double s , area ; //如果浮点数（float）参与运算，运算结果为double型
        s = (a+b+c) / 2 ;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << setiosflags(ios::fixed) << setprecision(2);
        cout << "面积 = " << area << endl;

    }
    

}
