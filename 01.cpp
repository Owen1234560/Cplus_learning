//函数重载
/*
函数重载满足的三个条件：
1.同一作用域下
2.函数名相同
3.函数参数类型不同、参数个数或位置不同
*/

#include<iostream>

using namespace std;

void func(int a){
    cout << a << endl;
}

void func(float a){
    cout << a << endl;
}

int main(){
    
    func(10);
    
    return 0;

}


