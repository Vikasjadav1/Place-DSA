#include <iostream>
#include <vector>
#include <list>
#include <queue>
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

    bool iscycleundirected(int src, vector<bool>& vis) {
        queue<pair<int, int>> q;
        q.push({src, -1});
        vis[src] = true;

        while (!q.empty()) {
            int u = q.front().first;
            int parentu = q.front().second;
            q.pop();

            for (int v : l[u]) {
                if (!vis[v]) {
                    vis[v] = true;
                    q.push({v, u});
                }
                else if (v != parentu) {
                    return true;
                }
            }
        }
        return false;
    }

    bool iscycle() {
        vector<bool> vis(v, false);
        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                if (iscycleundirected(i, vis)) {
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

   g.iscycle();

    return 0;
}
