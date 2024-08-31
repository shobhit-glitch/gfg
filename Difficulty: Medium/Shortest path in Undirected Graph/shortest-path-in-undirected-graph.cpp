//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        vector<int>ans(N,INT_MAX);
        unordered_map<int,list<int>>adj;
        for(auto edge :edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }
        //THE ADJ LIST IS CREATED 
        vector<int>visited(N,0);
        //vector<int>parent(N,0);
        queue<int>q;
        q.push(src);
        //parent[src]=-1;
        ans[src]=0;
        visited[src]=1;
        while(!q.empty()){
            int f=q.front();
            q.pop();
            for(auto it:adj[f]){
                if(!visited[it]){
                    visited[it]=1;
                    ans[it]=ans[f]+1;
                    //parent[it]=f;
                    q.push(it);
                }
            }
        }
        
        /*for(int i=N-1;i>=0;i--){
            int currN=i;
            int cnt=0;
            while(currN!=src){
                currN=parent[currN];
                
            }
            ans.push_back(cnt);
        }*/
        for(int i=0;i<N;i++){
            if(ans[i]==INT_MAX){
                ans[i]=-1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends