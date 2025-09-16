
#ifndef DOUBLYLINKED_LIST_H
#define DOUBLYLINKED_LIST_H
#pragma once
#include <iostream>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE (-1)
#define OVERFLOW (-2)
#define MAXSIZE 100
typedef int Status;
typedef char ElemType;
typedef struct DuLNode{
    ElemType   data;
    struct DuLNode *prior,*next;
}DuLNode,*DuLinkList;
DuLNode* GetElem_DuL(DuLinkList L, int i);
Status ListInsert_DuL(DuLinkList &L, int i, ElemType e);
Status ListDelete_DuL(DuLinkList &L, int i,ElemType& e);
//初始化
#endif //  DOUBLYLINKED_LIST_H
