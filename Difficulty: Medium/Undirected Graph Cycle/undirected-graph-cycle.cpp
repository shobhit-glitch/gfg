//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
 bool iscyclebfs(int src,vector<int> adj[],unordered_map<int,bool>vis){
     unordered_map<int,int>parent;
     parent[src]=-1;
     vis[src]=1;
     queue<int>q;
     q.push(src);
     while(!q.empty()){
         int front=q.front();
         q.pop();
         for(auto neigh : adj[front]){
             if(vis[neigh]==true && neigh!=parent[front]){
                 return true;
             }
             else if(vis[neigh]==false){
                 q.push(neigh);
                 vis[neigh]=true;
                 parent[neigh]=front;
             }
         }
     }
     return false;
 }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int,bool>vis;
        for(int i=0l;i<V;i++){
            if(!vis[i]){
                bool ans=iscyclebfs(i,adj,vis);
                if(ans){
                    return true;
                }
            }
        }
        return false;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends