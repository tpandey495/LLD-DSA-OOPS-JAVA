#include<bits/stdc++.h>
using namespace std;

class adjlist{
    int V;
    vector<int> *al;

public:
adjlist(int v){
    this->V=v;
    al=new vector<int>[V];
}

void addEdge(int x,int y){
    al[x].push_back(y);
    al[y].push_back(x);
}

void printadjlist(){
    for(int i=0;i<V;i++){
        cout<<i<<" ";
        for(auto it=al[i].begin();it!=al[i].end();it++){
            cout<<*it<<",";
        }
        cout<<endl;
    }
}


};




int main(){
 int v;
 cin>>v;

adjlist g(v);

for(int i=0;i<v;i++){
    int x,y;
    cin>>x>>y;
 g.addEdge(x,y);
}

g.printadjlist();

return 0;
}