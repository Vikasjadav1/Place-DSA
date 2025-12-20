#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

class Node{
    public:
    int data; 
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

int static idx=-1;
Node* buildtree(vector<int> preorder){
    idx++;

    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left=buildtree(preorder);
    root->right=buildtree(preorder);

    return root;
}

int transformsumtree(Node* root){
    if(root==NULL){
        return 0;
    }
    
    int oldValue = root->data;
   int leftsum=transformsumtree(root->left);
   int  rightsum=transformsumtree(root->right);
    root->data=leftsum+rightsum;
    return root->data + oldValue;
}

int main(){
vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
 Node* root = buildtree(preorder);
 cout<<transformsumtree(root);

return 0;
}