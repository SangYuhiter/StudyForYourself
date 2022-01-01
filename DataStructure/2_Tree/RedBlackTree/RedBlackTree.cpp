#include "RedBlackTree.h"

void RedBlackTree::InsertLeftChild(Node* parent,Node* child){
    //parent == nil means insert at root
    if(parent == nil){
        child->left_child = root;
        child->right_child = nil;
        child->parent = nil;
        root->parent = child;
        root = child;
    }else{
        child->left_child = parent->left_child;
        child->right_child = nil;
        child->parent = parent;
        parent->left_child = child;
    }
}

void RedBlackTree::InsertRightChild(Node* parent,Node* child){
    if(parent == nil){
        child->left_child = nil;
        child->right_child = root;
        child->parent = nil;
        root->parent = child;
        root = child;
    }else{
        child->left_child = nil;
        child->right_child = parent->right_child;
        child->parent = parent;
        parent->right_child = child;
    }
}

void PrintRBTree(RedBlackTree* rbtree){
    Node* root = rbtree->Root();
    Node* nil = rbtree->Nil();
    PrintTreeNode(root,nil);
}

void PrintRBTreeByLevel(RedBlackTree* rbtree){
    Node* root = rbtree->Root();
    Node* nil = rbtree->Nil();
    PrintTreeNodeByLevel(root,nil);
}

void PrintTreeNode(Node* node,Node* nil){
    if(node == nil)
        return;
    PrintTreeNode(node->left_child,nil);
    std::cout<<"data:"<<node->data<<",color:"<<NodeColorString[static_cast<unsigned int>(node->color)]<<std::endl;
    PrintTreeNode(node->right_child,nil);
}

void PrintTreeNodeByLevel(Node* node,Node* nil){
    if(node == nil)
        return;
    std::cout<<"(";
    PrintTreeNodeByLevel(node->left_child,nil);
    std::cout<<node->data;
    PrintTreeNodeByLevel(node->right_child,nil);
    std::cout<<")";
}

int main(){
    std::cout<<"start test!"<<std::endl;
    RedBlackTree* rb_tree = new RedBlackTree();

    PrintRBTree(rb_tree);
    std::cout<<"---------------------------"<<std::endl;
    Node* data1 = new Node(5);
    Node* data2 = new Node(10);
    Node* data3 = new Node(15);
    Node* data4 = new Node(20);
    rb_tree->InsertLeftChild(rb_tree->Root(),data1);
    PrintRBTree(rb_tree);
    PrintRBTreeByLevel(rb_tree);
    rb_tree->InsertRightChild(rb_tree->Root(),data2);
    std::cout<<std::endl<<"---------------------------"<<std::endl;
    PrintRBTree(rb_tree);
    PrintRBTreeByLevel(rb_tree);
    std::cout<<std::endl<<"---------------------------"<<std::endl;
    rb_tree->InsertLeftChild(rb_tree->Root(),data3);
    PrintRBTree(rb_tree);
    PrintRBTreeByLevel(rb_tree);
    std::cout<<std::endl<<"---------------------------"<<std::endl;
    rb_tree->InsertLeftChild(rb_tree->Root()->left_child,data4);
    PrintRBTree(rb_tree);
    PrintRBTreeByLevel(rb_tree);
    std::cout<<std::endl<<"---------------------------"<<std::endl;
    delete rb_tree;
    rb_tree = nullptr;
    std::cout<<"end test!"<<std::endl;
    return 0;
}
