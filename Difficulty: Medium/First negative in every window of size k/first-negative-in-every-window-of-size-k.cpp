class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        vector<int> v;
        queue<int> q;
        for(int i = 0; i<k; i++){
            if(arr[i]<0){
                q.push(arr[i]);
            }
        }
        if(q.empty()){
            v.push_back(0);
        }else{
            v.push_back(q.front());
        }
        for(int i = k; i<arr.size(); i++){
            if(q.size() && q.front()==arr[i-k]){
                q.pop();
            }
            if(arr[i]<0){
                q.push(arr[i]);
            }
            if(q.empty()){
                v.push_back(0);
            }else{
                v.push_back(q.front());
            }
            
        }
        return v;
    }
};