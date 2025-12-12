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

void topview(Node* root){
    queue<pair<Node*,int>> q;
    map<int,int> m;
    q.push({root,0});

    while(q.size()>0){
        Node* curr = q.front().first;
        int currhd=q.front().second;
        q.pop();

        if(m.find(currhd)==m.end()){
            m[currhd]=curr->data;
        }

        if(curr->left != NULL){
            q.push({curr->left,currhd-1});
        }

        
        if(curr->right != NULL){
            q.push({curr->right,currhd+1});
        }
    }
    for(auto it : m){
        cout<<it.second<<" ";
    }
}




int main(){
vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
 Node* root = buildtree(preorder);
topview(root);

return 0;
}