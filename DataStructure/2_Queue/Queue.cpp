#include "Queue.h"

void Stack::Push(int data){
    NODE* temp = new Node();
    temp->data = data;
    temp->next = top->next;
    top->next = temp;
}

void Stack::PrintStack(){
    NODE* temp = top->next;
    std::cout<<"top";
    while(temp != nullptr){
        std::cout<<"-->"<<temp->data;
        temp = temp->next;
    }
    std::cout<<std::endl;
}

int Stack::Pop(){
    NODE* temp = top->next;
    top->next = temp->next;
    int result = temp->data;
    std::cout<<"Pop"<<temp->data<<std::endl;
    delete temp;
    return result;
}
int main(){
    std::cout<<"Stack init"<<std::endl;
    Stack test_stack;

    for(int i = 0;i<6;i++){
        test_stack.Push(i);
        test_stack.PrintStack();
    }
    for(int i = 0;i< 3;i++){
        int pop_result = test_stack.Pop();
    }

    return 0;
}
