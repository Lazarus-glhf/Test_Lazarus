#include<iostream>
using namespace std;

//类定义
class Clock{
    public:
        Clock(int newH,int newM,int newS);//构造函数
        Clock();//默认构造函数
        void setTime(int newH,int newM,int newS);
        void showTime();
    private:
        int hour,minute,second;
};

//默认构造函数
Clock::Clock():hour(0),minute(0),second(0){}

//构造函数的实现
Clock::Clock(int newH,int newM,int newS):
    hour(newH),minute(newM),second(newS){
    }
    
//成员函数的实现
void Clock::setTime(int newH,int newM,int newS){
    hour = newH;
    minute = newM;
    second = newS;
}
void Clock::showTime(){
    cout<<hour<<":"<<minute<<":"<<second;
}

//主函数
int main(){
        Clock c1(0,0,0); //调用有参数的构造函数
        Clock c2;       //调用无参数的构造函数
        c1.showTime();
        c2.showTime();
        return 0;
    }