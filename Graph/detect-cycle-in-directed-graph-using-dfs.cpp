#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
    int v;
    list<int>* l;

public:
    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    void addedge(int u, int v) {
        l[u].push_back(v);
    }

    bool iscycledfs(int curr, vector<bool>& vis, vector<bool>& recpath) {
        vis[curr] = true;
        recpath[curr] = true;

        for (int neigh : l[curr]) {
            if (!vis[neigh]) {
                if (iscycledfs(neigh, vis, recpath))
                    return true;
            }
            else if (recpath[neigh]) {
                return true;
            }
        }

        recpath[curr] = false;
        return false;
    }

    bool iscycle() {
        vector<bool> vis(v, false);
        vector<bool> recpath(v, false);

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                if (iscycledfs(i, vis, recpath))
                    return true;
            }
        }
        return false;
    }
};

int main() {
    Graph g(4);
    g.addedge(1, 0);
    g.addedge(0, 2);
    g.addedge(2, 3);
    g.addedge(3, 0);

    cout << g.iscycle();  // prints 1 (true)
    return 0;
}
