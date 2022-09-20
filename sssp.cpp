#include<bits/stdc++.h>
using namespace std;
template<typename t>  
class adjList{

    map<t,list<t>>mp;
    public:
    void ajList(){

    }

    void addEdge(t u,t v, bool bidr){
     mp[u].push_back(v);
     if(bidr){
         mp[v].push_back(u);
     }
    }


     void distance(t src){
     
        queue<int>kp;
      map<t,int>dist;
      map<t,t>parent;
        kp.push(src);
      dist[src]=0;
      parent[src]=src;

        while(!kp.empty()){
         t node=kp.front();
             cout<<node<<" ";
             kp.pop();
             for(auto neighours:mp[node]){
                 if(!dist[neighours]){
                     kp.push(neighours);
                    
                    dist[neighours]=dist[node]+1;
                    parent[neighours]=node;
                     }
                  }
                  }

                  for(auto it:dist){
                      cout<<endl<<"distance start from "<<it.first<<" to "<<"3 is "<<it.second<< " ";
                  }

     }




    



};




int main(){

adjList<int> g;

g.addEdge(0,1,true);
g.addEdge(0,2,true);
g.addEdge(0,3,true);
g.addEdge(2,4,true);

g.distance(0);


return 0;
}