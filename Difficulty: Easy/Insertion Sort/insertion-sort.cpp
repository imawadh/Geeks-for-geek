class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i =0; i<n; i++){
            
            int val = arr[i];
            int j = i-1;
            // MOving the elements right which are greater thean val
            while(j>=0 && arr[j]>val){
                arr[j+1] = arr[j];
                j--;
            }
            // setting the val to its correct position .... 
            arr[j+1] = val;
        }
    }
};