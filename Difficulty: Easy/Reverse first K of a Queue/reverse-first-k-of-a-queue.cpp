class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        int n = q.size();
        stack <int> st;
        if(k>n){
            return q;
        }
        for(int i = 0; i<k;i++){
            int ele = q.front();
            q.pop();
            st.push(ele);
        }
        
        for(int i = 0; i<k; i++){
            int ele = st.top();
            st.pop();
            q.push(ele);
        }
        for(int i = k; i<n; i++){
            int ele =  q.front();
            q.pop();
            q.push(ele);
        }
        return q;
        
    }
};