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
    void AddNode(int data);
    void DeleteNode(int data);
    void PrintLinkList();
private:
    NODE* head;
    NODE* tail;
    unsigned int count;
};
#endif
