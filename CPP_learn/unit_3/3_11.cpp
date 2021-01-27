//系统函数
#include<iostream>
#include<cmath>     //调用函数库

using namespace std;
const double PI = 3.1415926535879;

int main(){
    double angle;
    cout<<"Please enter an angle: ";
    cin>>angle;     //输入角度值
    double radian = angle*PI/180;   //转为弧度
    cout<<"sin("<<angle<<")="<<sin(radian)<<endl;
    cout<<"cos("<<angle<<")="<<cos(radian)<<endl;
    cout<<"tan("<<angle<<")="<<tan(radian)<<endl;

    return 0;
}

