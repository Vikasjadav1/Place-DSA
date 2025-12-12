/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
 public:

     bool isidentical(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL){
            return p==q;
        }

        bool isleftsame=isidentical(p->left,q->left);
        bool isrightsame=isidentical(p->right,q->right);

        return isleftsame && isrightsame && p->val==q->val;
    }

    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(root==NULL ||subroot==NULL){
            return root==subroot;
        }

        if(root->val == subroot->val && isidentical(root,subroot)){
            return true;
        }

        return isSubtree(root->left,subroot) || isSubtree(root->right,subroot);
    }
};