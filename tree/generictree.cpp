#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    vector<Node*>child;
};

void print(Node * root){
    if (root==NULL)
        return;
     queue<Node *> q;  
    q.push(root); 
    while (!q.empty()){
        int n = q.size();
        while (n > 0){
        Node * p = q.front();
            q.pop();
            cout << p->data << " ";
        for (int i=0; i<p->child.size(); i++)
                q.push(p->child[i]);
            n--;
        }
  
        cout << endl; 
    }
}
  


int main(){
Node * root=new Node();
root->data=1;
Node *first=new Node();
first->data=5;
Node *second=new Node();
second->data=2;
Node *third=new Node();
third->data=3;
root->child.push_back(first);
root->child.push_back(second);
second->child.push_back(third);
print(root);
    return 0;
}