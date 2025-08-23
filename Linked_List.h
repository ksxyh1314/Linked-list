//
// Created by Lenovo on 2025/6/5.
//

#ifndef LINKED_LIST_H
#define LINKED_LIST_H
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
typedef struct LNode {
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;
Status InitList_L(LinkList &L);
int IsEmpty_L(LinkList L);
void DestroyList_L(LinkList &L);
void ClearList_L(LinkList &L);
int GetLength_L(LinkList L);
Status GetElem_L(LinkList L, int i, ElemType &e);
LNode *LocateElem_L(LinkList L, int i, ElemType e);
int LocateElem_L1(LinkList L, int i, ElemType e);
Status ListInsert_L(LinkList &L, int i, ElemType e);
Status ListDelete_L(LinkList &L, int i, ElemType &e);

#endif //LINKED_LIST_H

