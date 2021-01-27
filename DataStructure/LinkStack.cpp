#include <iostream>

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define OVERFLOW 0
#define OK 1
#define ERROR 0

using namespace std;

typedef char ElemType;
typedef int Status;

typedef struct node
{
    ElemType data;
    struct node *next;
}LinkStack;

//初始化栈运算算法

void InitStack(LinkStack *&top){
    top = NULL;
}