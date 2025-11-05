class Solution {
  public:
    // top down approach 
    vector<int> dp;
    int helper(int n ){
        if(n<=1) return n;
        if(dp[n] != -1) return dp[n];
        dp[n] = helper(n-1)+ helper(n-2);
        
        return dp[n]; 
    }
    
    int nthFibonacci(int n) {
        dp.assign(n+5,-1);
        return helper(n);
        
    }
};