#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define OVERFLOW 0
#define OK 1
#define ERROR 0

using namespace std;

typedef int ElemType;
typedef int Status;

typedef struct
{
    ElemType *elem;
    int length;
    int listsize;
} SqList;

Status InitList_sq(SqList &L)
{
    //构造一个空线性表
L.elem = (ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
if (!L.elem)
{
    return ERROR;
    L.length = 0;
    L.listsize = LIST_INIT_SIZE;
    return OK;
}

}

//销毁线性表
Status DestroyList(SqList &L)
{ //初始条件：顺序线性表L已存在。操作结果:销毁线性表L
    free(L.elem);
    L.elem = NULL;
    L.length = 0;
    L.listsize = 0;
    return OK;
}

//打印一个顺序表
Status printList(SqList L)
{
    if (L.length == 0)
    {
        printf("链表为空\n");
        return 0;
    }
    int i;
    for (i = 0; i < L.length; i++)
    {
        printf("data[%d] = %d\n", i, L.elem[i]);
    }
    printf("\n");
    return OK;
}

//求线性表中第i个元素算法
Status GetElem(SqList L, int i, ElemType &e)
{//初始条件：顺序线性表L已存在，1<=i<=ListLength(L)
//操作结果：用e返回L中第i个数据元素的值
    if (i<1||i>L.length)
        return ERROR;
    e = *(L.elem+i-1);
    return OK;
}

//获取顺序表的长度
Status getlength(SqList L)
{
    return L.length;
}

//创建一个顺序表，每个元素随机赋值
// Status creatList(SqList *L, int length)
// {
//     srand(time(0));
//     int i;
//     for (i = 0; i < length; i++)
//     {
//         L->elem[i] = rand() % 100;
//         L->length++;
//     }
//     return OK;
// }

//在指定位置插入一个新元素
Status insertList(SqList &L, int pos, ElemType elem)
{
    int i;
    if (pos < 1 || pos > L.length)
    {
        printf("插入的位置有误，无法插入数据\n");
        return 0;
    }
    for (i = L.length - 1; i >= pos - 1; i--)
    {
        L.elem[i + 1] = L.elem[i];
    }
    L.elem[pos - 1] = elem;
    L.length++;
    return OK;
}

//查找在线性表中是否含有指定元素
int locateElem(SqList L, ElemType e)
{
    int i;
    for (i = 0; i < L.length; i++)
    {
        //printf("在%d层循环\n",i);
        if (L.elem[i] == e)
        {
            printf("在pos[%d]位置处，查找到了元素elem:%d\n", i + 1, e);
        }
    }
    return 0;
}

// int main(void)
// {
//     int length;
//     SqList list_a;
//     list_a.length = 10;

//     printf("%d\n", length);
// }