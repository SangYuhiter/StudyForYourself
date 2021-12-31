#ifndef _REDBLACKTREE_HEAD_
#define _REDBLACKTREE_HEAD_

#include <iostream>

typedef enum class NodeColor:int{
    RED = 0,
    BLACK,
    NODECOLORMAX,
}NODECOLOR;

static const char* NodeColorString[static_cast<unsigned int>(NODECOLOR::NODECOLORMAX)] = {
    "Red",
    "Black",
};

typedef struct Node{
    int data;
    NODECOLOR color;
    Node* parent;
    Node* left_child;
    Node* right_child;

    Node():data(-1),color(NODECOLOR::BLACK),parent(nullptr),left_child(nullptr),right_child(nullptr){};
    Node(int data):data(data),color(NODECOLOR::BLACK),parent(nullptr),left_child(nullptr),right_child(nullptr){};
    Node(int data,NODECOLOR color,Node* parent,Node* left_child,Node* right_child):data(data),color(color),parent(parent),left_child(left_child),right_child(right_child){};
}NODE;


void PrintRBTree(Node* root){
    if(root == nullptr)
        return;
    PrintRBTree(root->left_child);
    std::cout<<"data:"<<root->data<<",color:"<<NodeColorString[static_cast<unsigned int>(root->color)]<<std::endl;
    PrintRBTree(root->right_child);
}

class RedBlackTree{
public:
    RedBlackTree(){
        std::cout<<"Construct a RB-Tree!"<<std::endl;
        nil = new Node();
        root = nil;
    };
    ~RedBlackTree(){
        std::cout<<"Destruct a RB-Tree!"<<std::endl;
        std::cout<<"delete nil!"<<std::endl;
        delete nil;
        nil = nullptr;
    }
    Node* Root(){
        return root;
    }

    //Pure insert child as a binary tree
    void InsertLeftChild(Node* parent,Node* child);
    void InsertRightChild(Node* parent,Node* child);
private:
    NODE* root;
    NODE* nil;
};
#endif
