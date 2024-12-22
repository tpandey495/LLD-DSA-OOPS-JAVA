#include<bits/stdc++.h>
using namespace std;
int main(){
multimap<int,int>sj;
int n;
cin>>n;
int ct[n];
for(int i=0;i<n;i++){
    int at,bt;
    cin>>at>>bt;
  sj.insert(pair<int,int>(at,bt));
}

int sum=0;
int count=0,prev=0;
for(auto it:sj){
 if(count==0){
   ct[count]=it.first+it.second;
}
 else{
     if(it.first<=prev){
    ct[count]=prev+it.second;
     }
   else{
    ct[count]=it.first+it.second;
  }
    }

    prev=ct[count];
    count++;
}

for(int i=0;i<n;i++){
   cout<<ct[i]<<" ";
}

return 0;

}