class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int m = n;
        int ct = 0;
        while(m){
            int digit  = m%10;
            m/=10;
            
            if(digit!=0 && n%digit==0){
                ct++;
            }
        }
        
        return ct;
    }
};