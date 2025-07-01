class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
        map<char,int> mp;
        for(int i =0; i<k; i++){
            mp[s[i]]++;
        }
        int ct = 0;
        if(mp.size()==k-1){
            ct++;
        }
        for(int i = k; i<s.size(); i++){
            char preChar = s[i-k];
            if(mp[preChar]==1){
                mp.erase(preChar);
            }
            else{
                mp[preChar]--;
            }
            mp[s[i]]++;
            if(mp.size()==k-1){
                ct++;
            }
        }
        return ct;
    }
};