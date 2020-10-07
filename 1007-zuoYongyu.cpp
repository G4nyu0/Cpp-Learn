#include <iostream>

using namespace std;


int main (){
    int t = 5 ;  //此刻分配存储空间，作用域从此处开始
    if (t>0){
        cout << "Hello\n";
        int w = 2 ;  // 此时分配存储空间，作用域从此处开始
        cout << w << endl;
                 
    }  //w的作用域范围结束    
    return 0;

}