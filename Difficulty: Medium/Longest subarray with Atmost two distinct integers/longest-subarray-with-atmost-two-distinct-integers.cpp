class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int ans =1;
        int n = arr.size();
        map<int,int> mp;
        int idx = 0;
        for(int i =0;i <n; i++){
            mp[arr[i]]++;
            if(mp.size()>=3){
                while(mp.size()>=3){
                    mp[arr[idx]]--;
                    if(mp[arr[idx]]==0){
                        mp.erase(arr[idx]);
                    }
                    idx++;
                }
            }
            ans = max(ans,i-idx+1);
            
        }
        return ans;
        
    }
};