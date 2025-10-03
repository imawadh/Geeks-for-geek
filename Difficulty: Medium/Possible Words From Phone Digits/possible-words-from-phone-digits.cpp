class Solution {
public:
    vector<string> ans;
    
    void helper(vector<string> &keyMap, vector<int> &arr, string &current, int index) {
        if (index == arr.size()) {
            ans.push_back(current);
            return;
        }
        
        int digit = arr[index];
        if (digit <= 1) { // skip 0 and 1
            helper(keyMap, arr, current, index + 1);
            return;
        }
        
        for (char ch : keyMap[digit]) {
            current.push_back(ch);
            helper(keyMap, arr, current, index + 1);
            current.pop_back(); // backtrack
        }
    }
    
    vector<string> possibleWords(vector<int> &arr) {
        vector<string> keyMap = {"",    "",    "abc", "def",
                                 "ghi", "jkl", "mno", "pqrs",
                                 "tuv", "wxyz"};
        string current = "";
        helper(keyMap, arr, current, 0);
        return ans;
    }
};
