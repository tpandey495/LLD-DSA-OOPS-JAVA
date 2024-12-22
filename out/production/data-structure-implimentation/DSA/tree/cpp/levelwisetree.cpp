#include<bits/stdc++.h>
using namespace std;

class binarytreenode{
    public:
    int data;
    binarytreenode *left;
    binarytreenode *right;  
    binarytreenode(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
    

};


binarytreenode* takeinputlevelwise(){
   int rootdata;
   cin>>rootdata;
 binarytreenode *root=new binarytreenode(rootdata);
 queue<binarytreenode*>pendingnodes;
 pendingnodes.push(root);
  while(pendingnodes.size()!=0){
  binarytreenode* first=pendingnodes.front();
  pendingnodes.pop();
   cout<<"enter the leftchild of"<<first->data<<endl;
   int leftchilddata;
  cin>>leftchilddata;
if(leftchilddata!=-1){
binarytreenode* leftchild=new binarytreenode(leftchilddata);
first->left=leftchild;
pendingnodes.push(leftchild);
}
int rightchilddata;
cout<<"enter the right data of child"<<first->data<<endl;
cin>>rightchilddata;
if(rightchilddata!=-1){
binarytreenode* rightchild=new binarytreenode(rightchilddata);
first->right=rightchild;
pendingnodes.push(rightchild);
}
}
return root;
}

// preorder
void preorder(binarytreenode* root){
if(root==NULL){
    return;
}
cout<<root->data<<endl;
preorder(root->left);
preorder(root->right);
}

// Inorder

void inorder(binarytreenode *root){
if(root==NULL){
    return;
}
inorder(root->left);
cout<<root->data<<endl;
inorder(root->right);
}

// postorder

void postorder(binarytreenode *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

/*too count number of nodes in the tree*/

int numNodes(binarytreenode *root){
if(root==NULL){
    return 0;
}
return 1+numNodes(root->left)+numNodes(root->right);
}


int main(){
binarytreenode *root=takeinputlevelwise();
preorder(root);
int pt=numNodes(root);
cout<<pt<<endl;
return 0;
}