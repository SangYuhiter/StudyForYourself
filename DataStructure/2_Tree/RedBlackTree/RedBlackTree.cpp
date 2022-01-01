#include "RedBlackTree.h"

void RedBlackTree::InsertLeftChild(Node* parent,Node* child){
    parent->left_child = child;
    child->parent = parent;
    child->left_child = nil;
    child->right_child = nil;
}

void RedBlackTree::InsertRightChild(Node* parent,Node* child){
    parent->right_child = child;
    child->parent = parent;
    child->left_child = nil;
    child->right_child = nil;
}

void PrintRBTree(RedBlackTree* rbtree){
    Node* root = rbtree->Root();
    Node* nil = rbtree->Nil();
    if(root == nil)
        return;
    PrintTreeNode(root,nil);
}

void PrintTreeNode(Node* node,Node* nil){
    if(node == nil)
        return;
    PrintTreeNode(node->left_child,nil);
    std::cout<<"data:"<<node->data<<",color:"<<NodeColorString[static_cast<unsigned int>(node->color)]<<std::endl;
    PrintTreeNode(node->right_child,nil);
}

int main(){
    std::cout<<"start test!"<<std::endl;
    RedBlackTree* rb_tree = new RedBlackTree();

    PrintRBTree(rb_tree);
    std::cout<<"---------------------------"<<std::endl;
    Node* data1 = new Node(5);
    Node* data2 = new Node(10);
    rb_tree->InsertLeftChild(rb_tree->Root(),data1);
    PrintRBTree(rb_tree);
    rb_tree->InsertRightChild(rb_tree->Root(),data2);
    std::cout<<"---------------------------"<<std::endl;
    PrintRBTree(rb_tree);
    std::cout<<"---------------------------"<<std::endl;
    delete rb_tree;
    rb_tree = nullptr;
    std::cout<<"end test!"<<std::endl;
    return 0;
}
