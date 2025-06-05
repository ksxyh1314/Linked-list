#include "Linked_List.h"
Status InitList_L(LinkList &L) {
    L=new LNode;
    L->next=nullptr;
    return OK;
}
int IsEmpty_L(LinkList L) {
    if (L->next) {
        return 0;
    }
    else
        return 1;
}
void DestroyList_L(LinkList &L) {
    LNode *p=nullptr;
    while (L) {
        p = L;
        L=L->next;
        delete p;
    }
}
void ClearList_L(const LinkList &L) {
    LNode *p=L->next;
    LNode *q=nullptr;
    while (p) {
        q=p->next;
        delete p;
        p=q;
    }
    L->next=nullptr;
}
int GetLength_L(LinkList L) {
    LNode *p=L->next;
    int count=0;
    while (p) {
        count++;
        p=p->next;
    }
    return count;
}
// Status GetElem_L(LinkList L, int i, ElemType &e) {
//     LNode *p=L->next;
//     int j=1;
//     while (p) {
//         if (j==i) {
//             e=p->data;
//             return OK;
//         }
//         ++j;
//         p=p->next;
//     }
//     return ERROR;
// }
Status GetElem_L(LinkList L, int i, ElemType &e) {
    LNode *p=L->next;
    int j=1;
    while (p&&j<i) {
        p=p->next;
        ++j;
    }
    if (!p||j>i)return ERROR;
    e=p->data;
    return OK;
}
