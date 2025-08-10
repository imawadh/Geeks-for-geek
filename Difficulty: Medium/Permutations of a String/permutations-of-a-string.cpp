class Solution {
  public:
    void permutation(string &s, int idx, vector<string> & ans){
        if(idx==s.size()){
            ans.push_back(s);
            return;
        }
        set<char> st;
        for(int i = idx; i<s.size(); i++){
            if(st.find(s[i])!=st.end()) continue;
            
            st.insert(s[i]);
            swap(s[i],s[idx]);
            permutation(s,idx+1,ans);
            swap(s[i],s[idx]);
            
        }
    }
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string> ans;
        permutation(s,0,ans);
        return ans;
        
    }
};
