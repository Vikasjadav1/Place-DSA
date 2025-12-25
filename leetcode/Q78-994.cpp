class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        if (n == 0) return 0;
        int m = grid[0].size();

        queue<pair<pair<int,int>,int>> q;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int ans = 0;

        // Push all initially rotten oranges
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    vis[i][j] = true;
                }
            }
        }

        while (!q.empty()) {
            int i = q.front().first.first;
            int j = q.front().first.second;
            int time = q.front().second;
            q.pop();

            ans = max(ans, time);

            // Up
            if (i - 1 >= 0 && !vis[i-1][j] && grid[i-1][j] == 1) {
                q.push({{i-1, j}, time + 1});
                vis[i-1][j] = true;
            }

            // Right
            if (j + 1 < m && !vis[i][j+1] && grid[i][j+1] == 1) {
                q.push({{i, j+1}, time + 1});
                vis[i][j+1] = true;
            }

            // Down
            if (i + 1 < n && !vis[i+1][j] && grid[i+1][j] == 1) {
                q.push({{i+1, j}, time + 1});
                vis[i+1][j] = true;
            }

            // Left
            if (j - 1 >= 0 && !vis[i][j-1] && grid[i][j-1] == 1) {
                q.push({{i, j-1}, time + 1});
                vis[i][j-1] = true;
            }
        }

        // Check for any fresh orange left
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && !vis[i][j]) {
                    return -1;
                }
            }
        }

        return ans;
    }
};
