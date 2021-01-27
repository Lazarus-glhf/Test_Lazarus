//重载函数
#include<iostream>
using namespace std;

int SumOfSquare(int a,int b){
    return a*a+b*b;
}
double SumOfSquare(double a,double b){
    return a*a+b*b;
}

int main(){
    int m,n;
    cout<<"Enter two integer:";
    cin>>m>>n;
    cout<<"Their sum of square:"<<SumOfSquare(m,n)<<endl;
    double x,y;
    cout<<"Enter two real number:";
    cin>>x>>y;
    cout<<"Their sum of square:"<<SumOfSquare(x,y)<<endl;

    return 0;
}