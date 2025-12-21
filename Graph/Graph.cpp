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

    void print(){
        for(int i=0;i<v;i++){
            cout<<i<<" : ";
            for(int neigh : l[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
graph g(5);
g.addedge(0,1);
g.addedge(1,2);
g.addedge(1,3);
g.addedge(2,3);
g.addedge(3,4);
g.print();
return 0;
}