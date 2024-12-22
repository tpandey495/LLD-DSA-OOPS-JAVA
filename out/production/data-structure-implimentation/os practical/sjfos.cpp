#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of process"<<endl;
    cin>>n;

int bt[n],ct[n],tat[n],wt[n];


cout<<"Enter the burst time of processes"<<endl;
for(int i=0;i<n;i++){
 cin>>bt[i];   
}

sort(bt,bt+n);

int prev=0;

for(int i=0;i<n;i++){
prev=prev+bt[i];
ct[i]=prev;
}

float avgtat=0;
for(int i=0;i<n;i++){
    tat[i]=ct[i];
     avgtat=avgtat+tat[i];
}

float avgwt=0;
for(int i=0;i<n;i++){
   wt[i]=tat[i]-bt[i]; 
   avgwt=avgwt+wt[i];
}

avgtat=float(avgtat)/float(n);
avgwt=float(avgwt)/float(n);

cout<<"BT"<<" "<<"CT"<<" "<<"TAT"<<" "<<"WT"<<endl;
for(int i=0;i<n;i++){
    cout<<bt[i]<<"   "<<ct[i]<<"    "<<tat[i]<<"  "<<wt[i]<<endl;
}

cout<<"Average turnaround time"<<avgtat<<endl;
cout<<"Average waiting  time"<<avgwt<<endl;


return 0;
}