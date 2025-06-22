class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        // code here
        int n = arr.size();
        stack<int> st;
        vector<int> v(n,-1);
        for(int i =0; i<n; i++){
            while(st.size() && st.top()>=arr[i]){
                st.pop();
            }
            if(st.size()){
                v[i] = st.top();
            }
            st.push(arr[i]);
        }
        return v;
    }
};