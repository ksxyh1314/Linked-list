#include "DoublyLinked_List.h"
DuLNode* GetElem_DuL(DuLinkList L, int i) {
    DuLNode *p=L->next;
    int j=1;
    while (p&&j<i) {
        p=p->next;
        ++j;
    }
    if (!p||j>i)return nullptr;
    return p;
}

Status ListInsert_DuL(DuLinkList &L, int i, ElemType e) {
    DuLNode *p = GetElem_DuL(L, i);
    if (!p)return ERROR;
    auto s=new DuLNode;
    s->data=e;
    s->prior=p->prior;
    p->prior->next=s;
    s->next=p;
    p->prior=s;
    return OK;
}
Status ListDelete_DuL(DuLinkList &L, int i,ElemType& e) {
    DuLNode *p = GetElem_DuL(L, i);
    if (!p)return ERROR;
    e=p->data;
    p->prior->next=p->next;
    p->next->prior=p->prior;
    free(p);
    return OK;
}
