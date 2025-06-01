/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector <int> ans;
    void leftTree(Node *root){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            return;
        }
        ans.push_back(root->data);
        if(root->left!=NULL){
            leftTree(root->left);
        }
        else{
            leftTree(root->right);
        }
        
    }
    void rightTree(Node *root){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            return;
        }
        if(root->right!=NULL){
            rightTree(root->right);
        }
        else{
            rightTree(root->left);
        }
        ans.push_back(root->data);
    }
    void nullNode(Node *root){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        nullNode(root->left);
        nullNode(root->right);
        
    }
    vector<int> boundaryTraversal(Node *root) {
        if(root==NULL) return ans;
        ans.push_back(root->data);
        // left view of tree except leaf node 
        leftTree(root->left);
        
        // For leaf nodes of left subtree
        nullNode(root->left);
        // for leaf nodes of right subtree
        nullNode(root->right);
        
        // right view of tree except leaf node 
        rightTree(root->right);
        
        return ans;
        
    }
};
