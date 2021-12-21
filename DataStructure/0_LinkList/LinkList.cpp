#include "LinkList.h"

void LinkList::AddNode(int data){
    NODE* add_node = new NODE();
    add_node->data = data;

    //insert to tail
    add_node->next = tail;
    add_node->priv = tail->priv;
    tail->priv->next = add_node;
    tail->priv = add_node;

    count++;
};

void LinkList::DeleteNode(int data){
    NODE* temp_node = head->next;
    while(temp_node != tail){
        if(temp_node->data == data){
            //cut the link
            temp_node->priv->next = temp_node->next;
            temp_node->next->priv = temp_node->priv;

            //save the next node
            NODE* next = temp_node->next;

            //delete the temp_node and count --
            delete temp_node;
            count--;
            temp_node = next;
        }
        else{
            temp_node = temp_node->next;
        }
    }
}

void LinkList::PrintLinkList(){
    NODE* print_node = head->next;
    std::cout<<count<<" Nodes:";
    std::cout<<"head"<<"("<<head->priv<<","<<head<<","<<head->next<<")";
    while(print_node != tail){
        std::cout<<"-->"<<print_node->data<<"("<<print_node->priv<<","<<print_node<<","<<print_node->next<<")";
        print_node = print_node->next;
    }
    std::cout<<"-->tail"<<"("<<tail->priv<<","<<tail<<","<<tail->next<<")";
    std::cout<<std::endl;
};

int main(){
    LinkList test_list;

    for(unsigned int i = 0;i<6;i++){
        test_list.AddNode(i);
    }
    test_list.PrintLinkList();
    std::cout<<"---------------------"<<std::endl;
    test_list.AddNode(3);
    test_list.PrintLinkList();
    std::cout<<"---------------------"<<std::endl;
    test_list.DeleteNode(3);
    test_list.PrintLinkList();
    return 0;
}
