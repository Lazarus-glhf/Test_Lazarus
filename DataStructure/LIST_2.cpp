#include <stdio.h>
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

// 结点的C语言描述
typedef struct node
{
    ElemType data;
    struct node *next;
} LNode, *LinkList;

//初始化单链表算法
Status initList(LinkList &L)
{ //操作结果：构造一个空的线性表L
    //产生头节点，并使L指向此头节点
    L = (LinkList)malloc(sizeof(LNode));
    if (!L)
        return ERROR;
    L->next = NULL;
    return OK;
}

//销毁单链表
Status Destroy(LinkList &L)
{
    LinkList p;
    while ((L))
    {
        p = L->next;
        free(L);
        L = p;
    }
    return OK;
}

//求单链表长度算法
int ListLength(LinkList L)
{ //初始条件：线性表L已经存在。操作结果：返回L中数据元素的个数
    int i = 0;
    LinkList p = L->next; //p指向第一个结点
    while (p)             //没到表尾
    {
        i++;
        p = p->next;
    }
    return i;
}

//求单链表中值为e的元素算法
int LocateElem(LinkList L, ElemType e)
{ //操作结果：返回L中第一个与e相等的数据元素的位序
  //若这样的数据元素不存在，则返回值为0
    int i = 0;
    LinkList p = L->next;
    while (p)
    {
        i++;
        if (p->data == e)
        { //找到这样的元素
            return i;
            p = p->next;
        }
        return 0;
    }
}

//单链表中的插入算法
Status ListInsert_L(LinkList &L, int i, ElemType e)
{ //在带头节点的单链线性表L的第i个元素之前插入元素e
    LinkList p, s;
    p = L;
    int j = 0;
    while (p && j < i - 1) //寻找第i-1个结点
    {
        p = p->next;
        ++j;
    }
    if (!p || j > i - 1)
    {
        return ERROR; //i<1或者大于表长
    }
    s = (LinkList)malloc(sizeof(LNode)); //生成新节点
    s->next = p->next;                   //插入L中
    p->next = s;
    return OK;
}

//单链表的删除算法
Status ListDelete_L(LinkList &L, int i, ElemType &e)
{ //在带头结点的单链线性表L中，删除第i个元素，并由e返回其值
    LinkList p, q;
    p = L;
    int j = 0;
    //寻找第i个结点，并令p指向其前驱
    while (p->next && j < i - 1)
    {
        p = p->next;
        ++j;
    }
    if (!(p->next) || j > i - 1)
        return ERROR;       //删除位置不合理
    q = p->next;
    p->next = q->next;      //删除并释放结点
    e = q->data;
    free(q);
    return OK;
}