// function Template for C++

class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        // code here.
        // Queue Reverse Using Stack
        stack<int> st;
        while(q.size()){
            st.push(q.front());
            q.pop();
        }
        while(st.size()){
            q.push(st.top());
            st.pop();
        }
        return q;
    }
};