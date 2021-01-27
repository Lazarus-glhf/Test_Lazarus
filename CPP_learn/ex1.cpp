#include <iostream>
using namespace std;

class clock
{
public:
    void setTime(int newH, int newM, int newS);
    void showTime();

private:
    int hour, minute, second;
};

void clock::setTime(int newH, int newM, int newS)
{
    hour = newH;
    minute = newM;
    second = newS;
}

void clock::showTime()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

int main()
{
    int h, m, s;
    cin >> h >> m >> s;
    clock myclock;
    //clock myclock(h,m,s);
    myclock.setTime(h, m, s);
    myclock.showTime();

    return 0;
}