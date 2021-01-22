//函数重载
/*
  引用作为重载条件
 */

#include<iostream>

using namespace std;

void func(int &a){
    cout << "func(int &a)调用" << endl;
}

void func(const int a){
    cout << "func(const int &a)调用" << endl;

}

int main(){
    func(10);
    return 0;

}


