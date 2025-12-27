#include <iostream>
#include <vector>
#include <list>
using namespace std;

class graph {
    int v;
    list<int>* l;

public:
    graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    void addedge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool iscycleundirected(int src, int parent, vector<bool>& vis) {
        vis[src] = true;

        for (int neighbour : l[src]) {
            if (!vis[neighbour]) {
                if (iscycleundirected(neighbour, src, vis)) {
                    return true;
                }
            } else if (neighbour != parent) {
                return true;
            }
        }
        return false;
    }

    bool iscycle() {
        vector<bool> vis(v, false);

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                if (iscycleundirected(i, -1, vis)) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    graph g(5);
    g.addedge(0, 1);
    g.addedge(1, 2);
    g.addedge(1, 3);
    g.addedge(2, 3);
    g.addedge(3, 4);

    cout<<g.iscycle();

    return 0;
}
