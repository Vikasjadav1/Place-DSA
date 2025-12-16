class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});

        int maxWidth = 0;

        while(!q.empty()){
            int size = q.size();
            unsigned long long startIdx = q.front().second;
            unsigned long long endIdx = q.back().second;

            maxWidth = max(maxWidth, (int)(endIdx - startIdx + 1));

            for(int i = 0; i < size; i++){
                auto curr = q.front();
                q.pop();

                unsigned long long idx = curr.second - startIdx; // overflow control

                if(curr.first->left){
                    q.push({curr.first->left, idx*2 + 1});
                }
                if(curr.first->right){
                    q.push({curr.first->right, idx*2 + 2});
                }
            }
        }
        return maxWidth;
    }
};
