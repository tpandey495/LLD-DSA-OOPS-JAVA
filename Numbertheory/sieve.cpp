#include<bits/stdc++.h>
using namespace std;

void makeSieve(int n){
   bool isPrime[n+1];

  for(int i=0;i<=n;i++){
    isPrime[i]=true;
   }

isPrime[0]=false;
isPrime[1]=false;

for(int i=2;i*i<=n;i++){
    if(isPrime[i]==true){
    for(int j=i*i;j<=n;j+=i){
      isPrime[j]=false;  
    }
    }
}

for(int i=0;i<=n;i++){
cout<<i<<":"<<isPrime[i]<<endl;
}

}


int main(){
int n;
cin>>n;
makeSieve(n);
return 0;
}