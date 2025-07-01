class Solution {
  public:
    queue<int> rearrangeQueue(queue<int> q) {
        // code here
        stack<int> st;
        queue<int> q1;
        while(q.size()){
            int ele = q.front();
            st.push(ele);
            q1.push(ele);
            q.pop();
        }
        int n = q1.size()/2;
        stack<int> st2;
        while(n){
            int ele = st.top();
            st.pop();
            st2.push(ele);
            n--;
        }
        n = q1.size()/2;
        while(n){
            int ele = q1.front();
            q.push(ele);
            ele = st2.top();
            q.push(ele);
            q1.pop();
            st2.pop();
            n--;
        }
        return q;
    }
};