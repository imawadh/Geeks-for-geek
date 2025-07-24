// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        double profit = 0.00;
        priority_queue<pair<double,int>> pq; // val/wt ration and total wight of an item 
        int n = val.size();
        for(int i =0; i<n; i++){
            pq.push(make_pair(((val[i]*0.1)/(wt[i]*0.1)),wt[i]));
        }
        
        while(pq.size() && capacity){
           double r = pq.top().first;
           double tw = pq.top().second;
           if(tw<=capacity){
               capacity-=tw;
               profit+=(r*tw*1.00);
           }
           else{
               profit+=(r*capacity*1.00);
               capacity = 0;
           }
           pq.pop();
        }
        return profit;
    }
};
