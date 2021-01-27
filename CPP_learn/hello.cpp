#include<iostream>
using namespace std;

class clock{
    public:
        void setTime(int newH,int newM,int newS);
        void showTime();
    private:
        int hour = 0,minute = 0,second = 0;
};

void clock::setTime(int newH,int newM,int newS){
    hour = newH;
    minute = newM;
    second = newS;
}
void clock::showTime(){
    cout<<hour<<":"<<minute<<":"<<second;
}

int main(){
    int h,m,s;
    cin>>h>>m>>s;

    clock myclock;
    myclock.setTime(h,m,s);
    myclock.showTime();
    return 0;
}