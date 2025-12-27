#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class edge {
public:
    int v;
    int wt;

    edge(int v, int wt) {
        this->v = v;
        this->wt = wt;
    }
};

void dijkstra(int src, vector<vector<edge>>& g, int v) {
    vector<int> dist(v, INT_MAX);
    dist[src] = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, src});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (edge e : g[u]) {
            if (dist[e.v] > dist[u] + e.wt) {
                dist[e.v] = dist[u] + e.wt;
                pq.push({dist[e.v], e.v});
            }
        }
    }

    for (int i = 0; i < v; i++) {
        cout << dist[i] << " ";
    }
    cout << endl;
}

int main() {
    int v = 6;
    vector<vector<edge>> g(v);

    g[0].push_back(edge(1, 2));
    g[0].push_back(edge(2, 4));

    g[1].push_back(edge(2, 1));
    g[1].push_back(edge(3, 7));

    g[2].push_back(edge(4, 3));
    g[3].push_back(edge(5, 1));

    g[4].push_back(edge(3, 2));
    g[4].push_back(edge(5, 5));

    dijkstra(0, g, v);
    return 0;
}
