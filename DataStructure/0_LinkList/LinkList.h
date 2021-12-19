#ifndef _LINKLIST_HEAD_
#define _LINKLIST_HEAD_

#include <iostream>

typedef struct Node{
    int data;
    Node* priv;
    Node* next;
}NODE;

class LinkList{
public:
    //default init the LinkList as dubble link
    LinkList(){
        head->data = tail->data = 0;
        head->priv = head->next = tail;
        tail->priv = tail->next = head;
        count = 0;
    };
    NODE* GetHead(){
        return head;
    };
    NODE* GetTail(){
        return tail;
    };
    int AddNode(int data){
        NODE* add_node = new NODE();
        add_node->data = data;

        //insert to tail
        add_node->next = tail;
        add_node->priv = tail->priv;
        tail->priv = add_node;
        return 0;
    };
    void PrintLinkList(){
        NODE* print_node = head;
        std::cout<<"head"<<"("<<&head<<")";
        while(print_node->next != tail){
            std::cout<<"-->"<<print_node->data<<"("<<&print_node<<")";
        }
        std::cout<<"-->tail"<<"("<<&tail<<")";
        std::cout<<std::endl;
    };
private:
    NODE* head;
    NODE* tail;
    unsigned int count;
};
#endif
