#include <iostream>

#define MAX_TREE_SIZE 100
#define LISTINCREMENT 10
#define OVERFLOW 0
#define OK 1
#define ERROR 0

using namespace std;

typedef char TElemType;

typedef TElemType SqBiTree[MAX_TREE_SIZE];
SqBiTree bt;

typedef struct BitNode
{
    TElemType data;
    BitNode *lchild, *rchild;
} BitNode, *BiTree;

//先序遍历

void PreOrder(BitNode *bt)
{
    if (bt != NULL)
    {
        printf("%c", bt->lchild);
        PreOrder(bt->lchild);
        PreOrder(bt->rchild);
    }
}

//中序遍历
void InOrder(BitNode *bt)
{
    if (bt != NULL)
    {
        InOrder(bt->lchild);
        printf("%c", bt->lchild);
        InOrder(bt->rchild);
    }
}

//后序遍历
void PostOrder(BitNode *bt)
{
    if (bt != NULL)
    {
        PostOrder(bt->lchild);
        PostOrder(bt->rchild);
        printf("%c", bt->lchild);
    }
}

//递归求和
int Sum(BitNode *b)
{
    if (b == NULL)
        return 0;
    else
    {
        return (b->data + Sum(b->lchild) + Sum(b->rchild));
    }
}

//销毁二叉树
void DestroyBTree(BitNode *&b)
{
    if (b != NULL)
    {
        DestroyBTree(b->lchild);
        DestroyBTree(b->rchild);
        free(b);
    }
    else
        return;
}

//求二叉树深度
int bt_Height(BitNode *T)
{
    if (T == NULL)
        return 0;
    else
    {
        if (T->lchild == NULL && T->rchild == NULL)
            return 1;
        else
        {
            return 1 + max(bt_Height(T->lchild), bt_Height(T->rchild));
        }
    }
}

//求二叉树节点个数
int NodeCount(BitNode *T)
{
    int lnum, rnum;
    if (T == NULL)
        return 0;
    else
    {
        lnum = NodeCount(T->lchild);
        rnum = NodeCount(T->rchild);
        return (lnum + rnum + 1);
    }
}