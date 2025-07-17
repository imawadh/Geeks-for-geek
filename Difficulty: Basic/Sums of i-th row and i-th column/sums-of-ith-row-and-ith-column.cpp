// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        // code here
        int minTimesOfCheck = min(N,M);
        
        for(int i =0; i<minTimesOfCheck; i++){
            int rowSum = 0;
            int colSum = 0;
            for(int j=0; j<A.size(); j++){
                colSum+=A[j][i];
            }
            for(int j=0; j<A[0].size(); j++){
                rowSum+=A[i][j];
            }
            if(rowSum==colSum){
                return 1;
            }
        
        }
        return 0;
    }
};