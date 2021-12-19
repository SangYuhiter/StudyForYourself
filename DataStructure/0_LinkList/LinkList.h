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
        head = new NODE();
        tail = new NODE();
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
    void AddNode(int data){
        NODE* add_node = new NODE();
        add_node->data = data;

        //insert to tail
        add_node->next = tail;
        add_node->priv = tail->priv;
        tail->priv->next = add_node;
        tail->priv = add_node;

        count++;
    };
    void PrintLinkList(){
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
private:
    NODE* head;
    NODE* tail;
    unsigned int count;
};
#endif
