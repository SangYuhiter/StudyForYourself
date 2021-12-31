#include "RedBlackTree.h"

void RedBlackTree::InsertLeftChild(Node* parent,Node* child){
    parent->left_child = child;
    child->parent = parent;
    child->left_child = nullptr;
    child->right_child = nullptr;
}

void RedBlackTree::InsertRightChild(Node* parent,Node* child){
    parent->right_child = child;
    child->parent = parent;
    child->left_child = nullptr;
    child->right_child = nullptr;
}

int main(){
    std::cout<<"start test!"<<std::endl;
    RedBlackTree* rb_tree = new RedBlackTree();

    PrintRBTree(rb_tree->Root());
    std::cout<<"---------------------------"<<std::endl;
    Node* data1 = new Node(5);
    Node* data2 = new Node(10);
    rb_tree->InsertLeftChild(rb_tree->Root(),data1);
    PrintRBTree(rb_tree->Root());
    rb_tree->InsertRightChild(rb_tree->Root(),data2);
    std::cout<<"---------------------------"<<std::endl;
    PrintRBTree(rb_tree->Root());
    std::cout<<"---------------------------"<<std::endl;
    delete rb_tree;
    rb_tree = nullptr;
    std::cout<<"end test!"<<std::endl;
    return 0;
}
