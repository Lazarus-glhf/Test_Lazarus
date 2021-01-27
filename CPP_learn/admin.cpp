#include <iostream>
using namespace std;

class Admin //创建一个类，记录用户名，备注
{
public:
    void setAdmin(char Name[]); //记录用户名
    void setNotes(char Note[]); //记录备注
    void printAdmin();          //打印信息

private:
    char Admin_name[20], Note[40]; //定义变量
};

//函数实现
void Admin::setAdmin(char name[])
{
    int i;
    for (i = 0; i < 20; i++)
    {
        if(name[i]=='\0') break;
        Admin_name[i]=name[i];
    }
}
void Admin::setNotes(char note1[])
{
    int i;
    for (i = 0; i < 40; i++)
    {
        //cout<<note1[i];
        if(note1[i]=='\0') break;
        Note[i]=note1[i];
    }
}
void Admin::printAdmin()
{
    cout << "Admin:" << Admin_name << endl
        << "Notes:" << Note << endl;
}

//balabala
int main(void)
{
    char name[20], note1[40];
    cout << "Please input your name:" << endl;
    cin >> name;
    cout << "Please input your notes:" << endl;
    cin >> note1;
    cout << endl;

    cout << "pls check ur infomations" << endl;

    Admin firstAdmin;
    firstAdmin.setAdmin(name);
    firstAdmin.setNotes(note1);
    firstAdmin.printAdmin();

    getchar();
}