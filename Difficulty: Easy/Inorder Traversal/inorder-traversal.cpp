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
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        stack<Node*> st;
        vector<int> ans;
        
        while(root!=NULL || st.size()){
            while(root!=NULL){
                st.push(root);
                root = root->left;
            }
            root = st.top();
            ans.push_back(root->data);
            st.pop();
            root = root->right;
        }
        
        return ans;
    }
};