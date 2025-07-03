class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        map<char,int> mp;
        int n = s.size();
        int ans = -1;
        int idx = 0;
        for(int i =0; i<n; i++){
            mp[s[i]]++;
            while(mp.size()>k){
                if(mp[s[idx]]==1){
                    mp.erase(s[idx]);
                }else{
                    mp[s[idx]]--;
                }
                idx++;
            }
            if(mp.size()==k){
                ans =max(ans, i - idx+1);
            }
        }
        return ans;
        
    }
};