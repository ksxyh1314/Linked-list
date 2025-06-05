#include "list.h"
#include "Linked_List.h"
void test02() {

}
void test01() {
    SqList L;
    InitList_Sq(L);
    ListInsert_Sq(L,1,'a');
    ListInsert_Sq(L,2,'b');
    ListInsert_Sq(L,3,'c');
    ListPrint(L);
    std::cout<<LocateElem_Sq(L,'b')<<std::endl;
    std::cout<<IsEmpty_Sq(L)<<std::endl;
    std::cout<<GetLength_Sq(L)<<std::endl;
    ListInsert_Sq(L,4,'d');
    ListPrint(L);
    ListDelete_Sq(L,1);
    ListPrint(L);
    ClearList_Sq(L);
    std::cout<<GetLength_Sq(L)<<std::endl;
    DestroyList_Sq(L);
}
int main(){
    test01();
    test02();
}