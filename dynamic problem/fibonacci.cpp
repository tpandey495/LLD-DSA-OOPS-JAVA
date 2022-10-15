#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
#define loop(n) for(int i = 0; i < n; ++i)

//recursion
int fibo(int n){
 if(n<=1){
    return n;
 }
 return fibo(n-1)+fibo(n-2);
}
//time complexity->o(2^n)
//space complexity->o(N)

//memoization

int memoization(int n,vector<int>&dp){
if(n<=1){
    return n;
}

if(dp[n]!=-1){
    return dp[n];
}

return dp[n]=memoization(n-1,dp)+memoization(n-2,dp);
}
//time complexity->o(N)
//space complexity->o(N)+o(N)


//tabulation
int tabulation(int n,vector<int>&dp){
if(n<=1){
    return n;
}

if(dp[n]!=-1){
    return dp[n];
}

return dp[n]=tabulation(n-1,dp)+tabulation(n-2,dp);
}


int main(){
   int n;
   cin>>n;
  cout<<fibo(n)<<endl;
  vector<int>dp(n+1,-1);
  
  cout<<memoization(n,dp)<<endl;
  return 0;
}