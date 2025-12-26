class Solution {
public:
    bool dfs(int src, vector<bool>& vis, vector<bool>& recpath,
             vector<vector<int>>& adj) {

        vis[src] = true;
        recpath[src] = true;

        for (int neigh : adj[src]) {
            if (!vis[neigh]) {
                if (dfs(neigh, vis, recpath, adj))
                    return true;
            }
            else if (recpath[neigh]) {
                return true;
            }
        }

        recpath[src] = false;
        return false;
    }

    bool canFinish(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);

        // build graph
        for (auto& e : edges) {
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> vis(n, false);
        vector<bool> recpath(n, false);

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                if (dfs(i, vis, recpath, adj))
                    return false; // cycle found
            }
        }
        return true; // no cycle
    }
};
