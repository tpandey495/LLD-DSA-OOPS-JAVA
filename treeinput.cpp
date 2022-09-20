#include<iostream>
using namespace std;

class binarytreenode{
public:
int data;
binarytreenode *left;
binarytreenode *right;

binarytreenode(int d){
    this->data=d;
    left=NULL;
    right=NULL;
}

~binarytreenode(){
    delete left;
    delete right;
}
};



void print(binarytreenode *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}


 binarytreenode* takeinput(){
    int data;
    cout<<"enter the data";
    cin>>data;
    if(data==-1){
    return NULL;
    }
    binarytreenode *filldata=new binarytreenode(data);
    cout<<filldata->data<<endl;
   filldata->left=takeinput();
   cout<<filldata->data<<endl;
   filldata->right=takeinput();
   return filldata;
}



int main(){
     binarytreenode *root=takeinput();
     print(root);
     delete root;
}







