#ifndef _STACK_HEAD_
#define _STACK_HEAD_

#include <iostream>

typedef struct Node{
    int data;
    Node* next;
}NODE;

class Stack{
public:
    Stack(){
        top = new Node();
        top->data = -1;
        top->next = nullptr;
    };
    ~Stack(){
        while(top != nullptr){
            NODE* temp = top->next;
            std::cout<<"delete "<<top->data<<std::endl;
            delete top;
            std::cout<<"delete end"<<std::endl;
            top = temp;
        }
    };
    void Push(int data);
    int Pop();
    void PrintStack();
private:
    NODE* top;
    unsigned int count;
};
#endif
