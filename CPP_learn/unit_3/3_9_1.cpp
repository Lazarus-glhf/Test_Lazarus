#include<iostream>
using namespace std;

int add(int x = 5,int y = 6){
    return x + y;
}

int main(){
    int a,b,c;
    a=add(10,20);     //10+20
    b=add(10);        //10+6
    c=add();          //5+_6
    cout<<a<<endl<<b<<endl<<c<<endl;
}
//如果一个函数有原型声明，且原型声明在定义之前，则默认参数值应在函数原型声明中给出
//如果只有函数定义，或者函数定义在前，则默认参数值可以在函数定义中给出