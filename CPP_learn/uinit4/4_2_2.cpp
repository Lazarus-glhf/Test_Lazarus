//类的定义

#include<iostream>
using namespace std;

class Clock{
    public:
        void setTime(int newH, int newM, int newS);
        void showTime();
    private:
        int hour = 0, minute = 0, second = 0;
};

//成员函数的实现
void Clock::setTime(int newH,int newM,int newS){
    hour = newH;
    minute = newM;
    second = newS;
}
void Clock::showTime(){
    cout<<hour<<":"<<minute<<":"<<second;
}

//对象的使用
int main(){
    int h,m,s;
    cin>>h>>m>>s;

    Clock myClock;
    myClock.setTime(h,m,s);
    myClock.showTime();
    return 0;
}