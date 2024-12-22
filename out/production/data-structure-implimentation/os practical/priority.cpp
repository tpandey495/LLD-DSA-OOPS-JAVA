#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of process"<<endl;
    cin>>n;

int pr[n],bt[n],ct[n],tat[n],wt[n];
multimap<int,int,greater<int>>mp;


for(int i=0;i<n;i++){
    cout<<"enter the priority  and burst time of process"<<i+1<<endl;
    int pr,bt;
    cin>>pr>>bt;
     mp.insert(pair<int,int>(pr,bt));
}


// for(auto it:mp){
//     cout<<it.first<<" "<<it.second<<endl;
// }


int prev=0,count=0;
for(auto it:mp){
prev+=it.second;
ct[count]=prev;
count++;
}


float avgtat=0;
for(int i=0;i<n;i++){
    tat[i]=ct[i];
    avgtat=avgtat+tat[i];
}



int count1=0;
float avgwt=0;
for(auto it:mp){
    wt[count1]=tat[count1]-it.second;
    avgwt=avgwt+wt[count1];
    count1++;
}

cout<<"BT"<<" "<<"CT"<<" "<<"TAT"<<" "<<"WT"<<endl;
int count2=0;
for(auto it:mp){
    cout<<it.second<<"   "<<ct[count2]<<"    "<<tat[count2]<<"  "<<wt[count2]<<endl;
    count2++;
}

avgtat=avgtat/n;
avgwt=avgwt/n;
cout<<"Average turnaround time"<<avgtat<<endl;
cout<<"Average waiting  time"<<avgwt<<endl;

return 0;
}