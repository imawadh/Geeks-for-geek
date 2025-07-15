// User function template for C++

// Function to insert string into TRIE.
void insert(struct TrieNode *root, string s) {
    // code here
    TrieNode* curr = root;
    for (int i = 0; i < s.length(); i++) {
        int idx = s[i] - 'a';
        if (curr->children[idx] == NULL) {
            curr->children[idx] = new TrieNode();
        }
        curr = curr->children[idx];
    }
    curr->isEndOfWord = true;
}

// Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string s) {
     TrieNode* curr = root;
    for (int i = 0; i < s.length(); i++) {
        int idx = s[i] - 'a';
        if (curr->children[idx] == NULL) {
            return false;
        }
        curr = curr->children[idx];
    }
    return curr != NULL && curr->isEndOfWord;
    // code here
}
