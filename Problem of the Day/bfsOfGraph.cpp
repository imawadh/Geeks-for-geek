# include <bits/stdc++.h>
using namespace std;
class bfs{
    public:
        vector<int> bfsTraversal(vector<vector<int>> &adj){
            int n =  adj.size();
            vector<bool> visited(n,0);
            visited[0] = true;
            vector<int> ans;
            queue<int> q;
            q.push(0);
            while(!q.empty()){
                int node =  q.front();
                ans.push_back(node);
                for(auto it:adj[node]){
                    if(!visited[it]){
                        q.push(it);
                        visited[it]=true;
                    }
                }
                q.pop();
            }
            return ans;
        }
};

int main(){
    bfs obj; 
    vector<vector<int>> adj = {{1, 2}, {0, 3, 4}, {0, 5}, {1}, {1}, {2}}; 
    vector<int> result = obj.bfsTraversal(adj); 
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;
    
    return 0;
}

