#include "LinkList.h"

int main(){
    LinkList test_list;

    for(unsigned int i = 0;i<6;i++){
        test_list.AddNode(i);
    }
    test_list.PrintLinkList();
    return 0;
}
