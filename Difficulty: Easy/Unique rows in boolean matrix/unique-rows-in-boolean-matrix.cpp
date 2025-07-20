class Solution {
  public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX], int row, int col) {
        // Your code here
        set<vector<int>>  st;
        
        for(int i = 0; i<row; i++){
            vector<int> temp(M[i], M[i] + col);
            st.insert(temp);
        }
        
        vector<vector<int>> ans;
        for(int i = 0; i<row; i++){
            vector<int> temp(M[i], M[i] + col);
            
            if(st.find(temp)!=st.end()){
                ans.push_back(temp);
                st.erase(temp);
                
            }
        }
        
        
        return ans;
    }
};