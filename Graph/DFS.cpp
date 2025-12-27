#include<iostream>
#include<vector>
#include<list>
using namespace std;

class graph{
    int v;
    list<int> *l;

    public:
    graph(int v){
        this->v=v;
        l=new list<int> [v];
        //arr=new int[v];
    }

    void addedge(int u , int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void dfshelper(int u , vector<bool> &vis){
        cout<<u<<" "; 
        vis[u]=true;

        for(int v :l[u]){
            if(!vis[v]){
                dfshelper(v,vis);  
            }
        }
    }

    void dfs(){
     int src=0;
     vector<bool> vis(v,false);

     dfshelper(src,vis);
    }
};

int main(){
graph g(5);
g.addedge(0,1);
g.addedge(1,2);
g.addedge(1,3);
g.addedge(2,4);
g.dfs();

return 0;
}