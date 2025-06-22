// User function Template for C++

class Solution {
  public:
    void rev(stack<int> &st1,stack<int> &st2){
        if(st1.empty()){
            return;
        }
        st2.push(st1.top());
        st1.pop();
        rev(st1,st2);
        
    } 
    void Reverse(stack<int> &st) {
        stack<int> st1;
        stack<int> st2;
        rev(st,st1);
        rev(st1,st2);
        rev(st2,st);
    }
};