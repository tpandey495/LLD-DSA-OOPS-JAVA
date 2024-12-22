#include<bits/stdc++.h>
using namespace std;


int  min_check(multimap<int,int>&mp2,int prev,unordered_multimap<int,int>&ct){
    int count=0;
for(auto it:mp2){
  
  if(it.second<=prev){
     //these programs are in ready queue
    prev=it.first+prev;
     count++;
     ct.insert(pair<int,int>(it.second,prev));
}
}
return count;
}

int main(){
multimap<int,int>mp1;
multimap<int,int>mp2;
unordered_multimap<int,int>ct;

int n;
cin>>n;



for(int i=0;i<n;i++){
    int at,bt;
    cin>>at>>bt ;
    // sorted acording to  at
  mp1.insert(pair<int,int>(at,bt));
  // sorted acording to 
  mp2.insert(pair<int,int>(bt,at));
}

auto it=mp1.begin();
int prev=it->first+it->second;

ct.insert(pair<int,int>(it->first,prev));



      //  program is in ready queue to calculate their ct
  int count =min_check(mp1,prev,ct);

label:
if(count==0){
for(auto it:mp1){
 prev =it.first+it.second;
 ct.insert(pair<int,int>(it.first,prev));
}
}

 count=min_check(mp1,prev,ct);
  
   if(count==0)
goto label;


for(auto it:ct){
  cout<<it.second<<" ";
}

return 0;

}