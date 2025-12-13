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

void KthLevel(Node* root , int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data;
    }
    KthLevel(root->left,k-1);
    KthLevel(root->right,k-1);
}

int main(){
vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
 Node* root = buildtree(preorder);
 KthLevel(root,3);

return 0;
}