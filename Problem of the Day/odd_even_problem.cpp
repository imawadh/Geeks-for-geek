class Solution {
  public:
    string oddEven(string s) {
        // code here
        vector <int> v(26,0);
        for(int i= 0; i<s.size() ; i++)
        {
            v[97-int(s[i])]+=1;
        }
        
        int count = 0;
        for(int i =0; i<26;i++)
        {
            if(v[i]!=0)
            {
                if(i%2==0 && v[i]%2==1)
                {
                    count++;
                }
                if(i%2==1 && v[i]%2==0)
                {
                    count++;
                }
            }
        }
        if(count%2==0)
        {
            return "EVEN";
        }
        return "ODD";
        
    }
};