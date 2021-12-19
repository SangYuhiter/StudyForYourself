#include "LinkList.h"

int main(){
    LinkList test_list;

    for(unsigned int i = 0;i<6;i++){
        std::cout<<"add begin"<<i<<std::endl;
        int result = test_list.AddNode(i);
        std::cout<<"add end"<<i<<std::endl;
        test_list.PrintLinkList();
        if(!result)
            std::cout<<"Add node failed"<<std::endl;
    }
    test_list.PrintLinkList();
    return 0;
}
