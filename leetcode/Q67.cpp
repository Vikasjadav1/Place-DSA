// #include <iostream>
// #include <vector>
// using namespace std;

// void helper(vector<vector<int>> &mat, int r, int c, string path,
//             vector<string> &ans, vector<vector<bool>> &vis) {
//     int n = mat.size();

//     // boundary + block + visited check
//     if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || vis[r][c] == true)
//         return;

//     // destination reached
//     if (r == n - 1 && c == n - 1) {
//         ans.push_back(path);
//         return;
//     }

//     vis[r][c] = true;

//     helper(mat, r + 1, c, path + "D", ans, vis);
//     helper(mat, r - 1, c, path + "U", ans, vis);
//     helper(mat, r, c - 1, path + "L", ans, vis);
//     helper(mat, r, c + 1, path + "R", ans, vis);

//     vis[r][c] = false; // backtracking
// }

// vector<string> findpath(vector<vector<int>> &mat) {
//     int n = mat.size();
//     vector<string> ans;

//     if (mat[0][0] == 0) return ans;

//     vector<vector<bool>> vis(n, vector<bool>(n, false));

//     helper(mat, 0, 0, "", ans, vis);

//     return ans;
// }

// int main() {
//     vector<vector<int>> mat = {
//         {1, 0, 0, 0},
//         {1, 1, 0, 1},
//         {1, 1, 0, 0},
//         {0, 1, 1, 1}
//     };

//     vector<string> ans = findpath(mat);

//     for (string path : ans) {
//         cout << path << endl;
//     }

//     return 0;
// }




#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat, int r, int c, string path,
            vector<string> &ans) {
    int n = mat.size();

    // boundary + block + visited check
    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || mat[r][c] == -1)
        return;

    // destination reached
    if (r == n - 1 && c == n - 1) {
        ans.push_back(path);
        return;
    }

    mat[r][c] = -1;

    helper(mat, r + 1, c, path + "D", ans);
    helper(mat, r - 1, c, path + "U", ans);
    helper(mat, r, c - 1, path + "L", ans);
    helper(mat, r, c + 1, path + "R", ans);

    mat[r][c] = 1; // backtracking
}

vector<string> findpath(vector<vector<int>> &mat) {
    int n = mat.size();
    vector<string> ans;

    if (mat[0][0] == 0) return ans;



    helper(mat, 0, 0, "", ans);

    return ans;
}

int main() {
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> ans = findpath(mat);

    for (string path : ans) {
        cout << path << endl;
    }

    return 0;
}
