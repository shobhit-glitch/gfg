//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	/*void dfs(int node, vector<int> adj[], vector<int>& vis, stack<int>& st) {
        vis[node] = 1;
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfs(it, adj, vis, st);
            }
        }
        st.push(node);
    }*/
    void dfs(int node,unordered_map<int,bool> &visited,stack<int> &st,vector<int> adj[]){
        visited[node]=true;
        for( auto neigh:adj[node]){
            if(!visited[neigh]){
                dfs(neigh,visited,st,adj);
            }
        }
        st.push(node);
    }
    // Function to return list containing vertices in Topological order.
    vector<int> topoSort(int V, vector<int> adj[]) {
        /*vector<int> vis(V, 0); // Initialize the vis vector
        stack<int> st;
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, adj, vis, st);
            }
        }
        vector<int> topoOrder;
        while (!st.empty()) {
            topoOrder.push_back(st.top());
            st.pop();
        }
        return topoOrder;*/
        /*unordered_map<int,bool>visited;
        stack<int>st;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,visited,st,adj);
            }
        }
        vector<int>toposort;
        while(!st.empty()){
            toposort.push_back(st.top());
            st.pop();
        }
        return toposort;*/
        // **************[ KAHN'S ALGORITHM ]*****************
        vector<int>indeg(V);
        for(int i=0;i<V;i++){
            for(auto j:adj[i]){
                indeg[j]++;
            }
        }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indeg[i]==0){
                q.push(i);
            }
        }
        
        //bfs
        vector<int>ans;
        while(!q.empty()){
            int f=q.front();
            ans.push_back(f);
            q.pop();
            for(auto neigh: adj[f]){
                indeg[neigh]--;
                if(indeg[neigh]==0){
                    q.push(neigh);
                }
            }
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends