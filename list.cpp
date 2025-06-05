#include "list.h"
Status InitList_Sq(SqList& L) {
    L.elem = new ElemType[MAXSIZE];
    //if (!L.elem) exit(OVERFLOW); 是多余的，因为 new 在失败时会直接抛出 std::bad_alloc 异常，不会返回 nullptr
    L.length = 0;
    return OK;
    // try {
    //     L.elem = new ElemType[MAXSIZE](0); // 括号初始化为零值
    //     L.length = 0;
    //     return OK;
    // }
    // catch (const std::bad_alloc&) {
    //     return OVERFLOW; // 返回错误码而非直接exit
    // }
}
void DestroyList_Sq(const SqList& L) {
    //if (L.elem)----确保安全
    delete[] L.elem;
};
void ClearList_Sq(SqList& L) {
    L.length = 0;
}
int GetLength_Sq(SqList L) {
    return (L.length);
}
int IsEmpty_Sq(SqList L) {
    if (L.length == 0)
        return 1;
    else
        return 0;
}
int GetElem(SqList L, int i, ElemType &e) {
    if (i<1||i>L.length) {
        return ERROR;
    }
    e=L.elem[i-1];
    return OK;
}
int LocateElem_Sq(SqList L, ElemType e) {
    for (int i=0;i<L.length;i++) {
        if (L.elem[i]==e) {
            return i+1;
        }
    }
    return 0;
}
Status ListInsert_Sq(SqList& L, int i, ElemType e) {
    if (i<1||i>L.length+1) {return ERROR;}
    if (L.length==MAXSIZE) {return ERROR;}
    for (int j=L.length-1;j>=i-1;j--) {
        L.elem[j+1]=L.elem[j];
    }
    L.elem[i-1]=e;
    L.length++;
    return OK;
}
Status ListDelete_Sq(SqList& L, int i) {
    if (i<1||i>L.length) {return ERROR;}
    if (L.length==MAXSIZE) {return ERROR;}
    for (int j=i;j<L.length;j++) {
        L.elem[j-1]=L.elem[j];
    }
    L.length--;
    return OK;
}
void ListPrint(const SqList& L) {
    for (int i=0;i<L.length;i++) {
        std::cout<<L.elem[i]<<" ";
    }
    std::cout<<std::endl;
}