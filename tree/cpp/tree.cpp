#include<iostream>
using namespace std;

class BinaryTreeNode{
    public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int d){
        this->data=d;
        left=NULL;
        right=NULL;
    }

    ~BinaryTreeNode(){
      delete left;
      delete right;
    }
};

void printTree(BinaryTreeNode *root){
       if(root==NULL){
        return;
        }

        cout<<root->data<<endl;

        if(root->left!=NULL){
        cout<<"L"<<root->left->data;
         }
        
        if(root->right!=NULL){
            cout<<"R"<<root->right->data;
        }
     
        cout<<endl;
        printTree(root->left);
        printTree(root->right);
}



int main(){
BinaryTreeNode * root=new BinaryTreeNode(1);
BinaryTreeNode *node1=new BinaryTreeNode(2);
BinaryTreeNode *node2=new BinaryTreeNode(3);
root->left=node1;
root->right=node2;
printTree(root);
delete root;
return 0;
}