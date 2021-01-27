#include <iostream>
using namespace std;
int main()
{
    int a[5] = {2, 4, 5, 8, 9};
    int *p;
    p = a;
    cout << "number of P:" << p << endl;
    int i = *p++;
    cout << "i= " << i << endl;
    cout << "number of p after *p++\t" << p << endl
         << "*p=" << *p<<endl;
    int size;
    size = sizeof(int);
    cout << "size=" << size << endl;

    return 0;
}