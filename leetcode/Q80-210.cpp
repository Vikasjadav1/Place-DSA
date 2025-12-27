class Solution {
public:
    bool dfsCycle(int u, vector<vector<int>>& adj,
                  vector<bool>& vis, vector<bool>& rec) {
        vis[u] = true;
        rec[u] = true;

        for (int v : adj[u]) {
            if (!vis[v]) {
                if (dfsCycle(v, adj, vis, rec))
                    return true;
            } else if (rec[v]) {
                return true;
            }
        }

        rec[u] = false;
        return false;
    }

    void topoDFS(int u, vector<vector<int>>& adj,
                 vector<bool>& vis, stack<int>& st) {
        vis[u] = true;

        for (int v : adj[u]) {
            if (!vis[v]) {
                topoDFS(v, adj, vis, st);
            }
        }
        st.push(u);
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for (auto& p : prerequisites) {
            adj[p[1]].push_back(p[0]);
        }

        vector<bool> vis(numCourses, false);
        vector<bool> rec(numCourses, false);

        // Cycle detection
        for (int i = 0; i < numCourses; i++) {
            if (!vis[i]) {
                if (dfsCycle(i, adj, vis, rec)) {
                    return {};  // cycle found
                }
            }
        }

        // Topological sort
        stack<int> st;
        vis.assign(numCourses, false);

        for (int i = 0; i < numCourses; i++) {
            if (!vis[i]) {
                topoDFS(i, adj, vis, st);
            }
        }

        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};
