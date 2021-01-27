#include<iostream>
using namespace std;

//类定义
class Clock{
    public:
        Clock(int newH,int newM,int newS);//构造函数
        void setTime(int newH,int newM,int newS);
        void showTime();
    private:
        int hour,minute,second;
};

//构造函数的实现
Clock::Clock(int newH,int newM,int newS):
    hour(newH),minute(newM),second(newS){
    }
    
//成员函数的实现
// void Clock::setTime(int newH,int newM,int newS){
//     hour = newH;
//     minute = newM;
//     second = newS;
// }
void Clock::showTime(){
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}

//主函数
int main(){
        Clock c(0,0,0); //自动调用构造函数
        c.showTime();
        Clock b(1,2,3);
        b.showTime();
        return 0;
    }