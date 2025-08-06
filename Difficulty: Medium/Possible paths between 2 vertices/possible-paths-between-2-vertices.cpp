class Solution {
  public:
    int ct = 0;
    void dfs(int source, int destination,vector<int> adj[],set<int>&st){
        if(source==destination){
            ct++;
            // st.erase(source);   
            return;
        }
        st.insert(source);
        
        for(auto ele:adj[source]){
            if(st.find(ele)==st.end()){
                dfs(ele,destination,adj,st);
            }
        }
        st.erase(source);
    }
    // Function to count paths between two vertices in a directed graph.
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        // Code here
        set<int> st;
        dfs(source,destination,adj,st);
        return ct;
    }
};