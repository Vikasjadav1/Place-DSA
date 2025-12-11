#include<iostream>
#include<vector>
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

//preorder
void preOrder(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


//inorder
void inorder(Node* root){
    if(root==NULL){
        return;
    }
     preOrder(root->left);
     cout<<root->data<<" ";
    preOrder(root->right);
}

 //postorder
 void postorder(Node* root){
    if(root==NULL){
        return;
    }
     preOrder(root->left);
      preOrder(root->right);
     cout<<root->data<<" ";
   
}


//level order 
void levelorder(Node* root){
  queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(q.size()>0){
        Node* curr = q.front();
        q.pop();
        if(curr==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }
        cout<<curr->data<<" ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}



int main(){
vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
 Node* root = buildtree(preorder);
//  cout<<root->data<<" ";

//preoder
// preOrder(root);

//inorder
// inorder(root);

//postorder
// postorder(root);

//levelorder
levelorder(root);

return 0;
}