#include <iostream>
#include <vector>
#include <list>
#include <stack>
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

    void dfs(int curr, vector<bool>& vis, stack<int>& s) {
        vis[curr] = true;

        for (int neigh : l[curr]) {
            if (!vis[neigh]) {
                dfs(neigh, vis, s);
            }
        }

        // push AFTER visiting all neighbors
        s.push(curr);
    }

    void topsort() {
        vector<bool> vis(v, false);
        stack<int> s;

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                dfs(i, vis, s);
            }
        }

        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
};

int main() {
    Graph g(4);

    // DAG example (no cycle)
    g.addedge(0, 1);
    g.addedge(0, 2);
    g.addedge(1, 3);
    g.addedge(2, 3);

    g.topsort();
    return 0;
}
