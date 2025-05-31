// User function template for C++

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to find the height of a binary tree.
    
    int height(Node* node) {
        // code here
        if (node == NULL) return -1;  
        int left = height(node->left);
        int right = height(node->right);
        return max(left, right) + 1;
    }
};
