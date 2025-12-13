class Solution {
public:
    int search(vector<int>& inorder, int left, int right, int val) {
        for(int i = left; i <= right; i++) {
            if(inorder[i] == val) return i;
        }
        return -1;
    }

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,
                     int &preidx, int left, int right) {
        if(left > right) return NULL;

        int rootVal = preorder[preidx];
        TreeNode* root = new TreeNode(rootVal);
        preidx++;

        int inidx = search(inorder, left, right, rootVal); 

        root->left  = helper(preorder, inorder, preidx, left, inidx - 1);
        root->right = helper(preorder, inorder, preidx, inidx + 1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preidx = 0;
        return helper(preorder, inorder, preidx, 0, inorder.size() - 1);
    }
};
