#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
int main(){
Node *head=NULL;
Node *second=NULL;
Node *third=NULL;
head=new Node();
second=new Node();
third=new Node();
head->data=1;
head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=NULL;
Node *temp;
temp=head;
while(temp){
   cout<<temp->data<<endl;
   temp=temp->next;
}
return 0;
}