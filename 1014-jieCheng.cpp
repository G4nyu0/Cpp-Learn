#include  <iostream>

using namespace std;

// 阶乘

int main(){
     
     /*. Way - 1 
        int n,i,f;

        for (n=1;n<=5;n++)
        {
            f=1;
            for(i=1;i<=n;i++){
                f = f * i;
            }
            cout << n << "!=" << f << endl; 
            
        }

     */

    // Way - 2 
    int n,f,i;
    for (n=1;n<=5;n++){
        f=1; //循环初始化为1
        for(i = 1;i <= n;i++){
        
             f = f*i;

        }
        cout << n << "!=" << f << endl;
    }
    return 0 ;

}

/* 函数做法
    int fact (int n ){
        int f=1 ;
        for (int i=1;i<n;i++){
            f = f * i;
        }
    }
    return f;

    //在上面代码(int main )进行调用

*/
/* 静态变量做法
    int fact (int n ){
        static int f = 1;   // 只会在程序运行时初始化一次，即f=1只做一遍
        f=f*n;
        return f ;

        //在上面代码进行循环
    }
*/