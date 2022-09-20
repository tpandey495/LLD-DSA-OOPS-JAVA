#include<bits/stdc++.h>
using namespace std;

int main(){
int no_of_process;
cin>>no_of_process;
int at[no_of_process],bt[no_of_process],ct[no_of_process],tat[no_of_process],wt[no_of_process];

for(int i=0;i<no_of_process;i++){
    cin>>at[i];
}

for(int j=0;j<no_of_process;j++){
    cin>>bt[j];
}

multimap<int,int>mp;

for(int i=0;i<no_of_process;i++){
    int new_at=at[i];
    int new_bt=bt[i];
    mp.insert(pair <int, int> (new_at,new_bt));
}

int sum=0;

//main logic 
for(auto it=mp.begin();it!=mp.end();it++){
    if(it==mp.begin()){
 sum=it->first+it->second;
 cout<<sum<<" ";
}
else{
    
  sum=sum+it->second;
 cout<<sum<<" ";
    }
}

// for(auto it=mp.begin();it!=mp.end();it++){
//     cout<<it->first<<" "<<it->second<<endl;
// }


return 0;
}