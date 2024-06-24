# include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        if(q>(n+n))
        {
            return 0;
        }
        else if(q<n+1)
        {
            return q-1;// 
        }
        else if(q==n+1)
        {
            return n;
        }
        else
        {
            return (n+n - q + 1);
        }
        
    }
};