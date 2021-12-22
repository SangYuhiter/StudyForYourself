#ifndef _STACK_HEAD_
#define _STACK_HEAD_

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
    ~LinkList(){
        NODE* temp1 = head;
        NODE* temp2 = head;
        while(temp1 != nullptr){
            if(temp1 == tail){
                temp1->next = nullptr;
            }
            temp1 = temp1->next;
            std::cout<<"delete "<<temp2->data<<",count:"<<count<<std::endl;
            delete temp2;
            temp2 = temp1;
            if(temp1 != head && temp1 != tail){
                count--;
            }
        }
    }
    NODE* GetHead(){
        return head;
    };
    NODE* GetTail(){
        return tail;
    };
    void AddNode(int data);
    void DeleteNode(int data);
    void PrintLinkList();
private:
    NODE* head;
    NODE* tail;
    unsigned int count;
};
#endif
