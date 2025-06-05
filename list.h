#pragma once
#include <iostream>
//函数结果状态代码
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE (-1)
#define OVERFLOW (-2)
#define MAXSIZE 100
// #include <bits/ostream.tcc>
//Status是函数的类型，其值是函数结果状态代码
typedef int Status;
typedef char ElemType;
typedef struct{
    ElemType *elem;
    int length;
}SqList;//顺序表类型

//初始化
Status InitList_Sq(SqList& L);
void DestroyList_Sq(const SqList& L);
void ClearList_Sq(SqList& L) ;
int GetLength_Sq(SqList L);
int IsEmpty_Sq(SqList L) ;
int GetElem(SqList L, int i, ElemType &e) ;
int LocateElem_Sq(SqList L, ElemType e) ;
Status ListInsert_Sq(SqList& L, int i, ElemType e);
Status ListDelete_Sq(SqList& L, int i) ;
void ListPrint(const SqList& L) ;