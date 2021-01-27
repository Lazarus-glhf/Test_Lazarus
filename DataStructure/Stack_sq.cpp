#include <iostream>

#define STACK_INIT_SIZE 100
#define STACK_INCREMENT 10
#define OVERFLOW 0
#define OK 1
#define ERROR 0

using namespace std;

typedef char ElemType;
typedef int Status;

//顺序栈类型声明
typedef struct
{
    ElemType *base;
    ElemType *top;
    int stacksize;
} SqStack;

//初始化栈算法
void InitStack(SqStack &S)
{
    //构造一个空栈s
    if (!(S.base = (ElemType *)malloc(STACK_INIT_SIZE * sizeof(ElemType))))
        exit(OVERFLOW);
    S.top = S.base;
    S.stacksize = STACK_INIT_SIZE;
}

//销毁栈算法
void DetroyStack(SqStack &S)
{
    free(S.base);
    S.base = NULL;
    S.top = NULL;
    S.stacksize = 0;
}

//进栈算法
void Push(SqStack &S, ElemType e)
{
    if (S.top - S.base >= S.stacksize)
    { //栈满，追加储存空间
        S.base = (ElemType *)realloc(S.base, (S.stacksize + STACK_INCREMENT) * sizeof(ElemType));

        if (!S.base)
        {
            exit(OVERFLOW);
        }
        S.top = S.base + S.stacksize;
        S.stacksize += STACK_INCREMENT;
    }
    *(S.top)++ = e;
}

//出栈运算方法
Status Pop(SqStack &S, ElemType &e)
{ //若栈不空，则删除S的栈顶元素，用e返回其值
    if (S.top == S.base)
        return ERROR;
    e = *--S.top;
    return OK;
}

//取栈顶元素
Status GetTop(SqStack S, ElemType &e)
{
    //若栈不空，则用e返S的栈顶元素
    if(S.top>S.base){
        e = *(S.top-1);
        return OK;
    }
    else
    {
        return ERROR;
    }
}

//判断栈空算法
Status StackEmpty(SqStack S){
    //若栈S为空栈，则返回TRUE
    if(S.top == S.base)
        return true;
    else
    {
        return false;
    }
    
}