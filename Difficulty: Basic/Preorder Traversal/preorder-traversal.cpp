/* A binary tree node has data, pointer to left child
   and a pointer to right child

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Rec
    void helper(Node* root,vector<int> &v){
        if(root==NULL) return;
        v.push_back(root->data);
        helper(root->left,v);
        helper(root->right,v);
        
        
    }

    // Function to return a list containing the preorder traversal of the tree.
    vector<int> preorder(Node* root) {
        // write code here
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};