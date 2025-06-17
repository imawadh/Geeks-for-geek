class Solution {
  private:
    stack <int>st1;
    stack <int>st2;
  public:
    Solution() {
        // code here
        
    }

    // Add an element to the top of Stack
    void push(int x) {
        st1.push(x);
        if(st2.size()==0){
            st2.push(x);
        }else{
            st2.push(max(x,st2.top()));
        }
        // code here
    }

    // Remove the top element from the Stack
        
    void pop() {
        // code here
        if(!st1.empty()){
            
            st1.pop();
            st2.pop();
        }
        
    }

        
    // Returns top element of the Stack
    int peek() {
        // code here
        if(st1.size()==0){
            return -1;
        }
        return st1.top();
    }
        

    // Finds minimum element of Stack
    int getMax() {
        // code here
        if(st2.size()==0){
            return -1;
        }
        return st2.top();
    }
};