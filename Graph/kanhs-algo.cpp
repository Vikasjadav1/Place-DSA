#include <iostream>
#include <vector>
#include <list>
#include <queue>
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

    void toposort() {
        vector<int> indeg(v, 0);
        queue<int> q;
        vector<int> res;

        // Calculate indegree
        for (int u = 0; u < v; u++) {
            for (int node : l[u]) {
                indeg[node]++;
            }
        }

        // Push nodes with 0 indegree
        for (int i = 0; i < v; i++) {
            if (indeg[i] == 0) {
                q.push(i);
            }
        }

        // BFS
        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            res.push_back(curr);

            for (int node : l[curr]) {
                indeg[node]--;
                if (indeg[node] == 0) {
                    q.push(node);
                }
            }
        }

        // Print result
        for (int val : res) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    Graph g(6);  // nodes: 0 to 5
    g.addedge(3, 1);
    g.addedge(2, 3);
    g.addedge(4, 0);
    g.addedge(5, 0);
    g.addedge(5, 2);

    g.toposort();
    return 0;
}
