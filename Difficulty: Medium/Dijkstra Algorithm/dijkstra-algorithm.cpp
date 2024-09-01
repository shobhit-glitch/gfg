//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> vec[], int S)
    {
        // Code here
        unordered_map<int,list<pair<int,int>>>adj;
        for (int i = 0; i < V; ++i) {
        for (auto edge : vec[i]) {
            int u = i;
            int v = edge[0];
            int w = edge[1];
            adj[u].push_back(make_pair(v, w));
            adj[v].push_back(make_pair(u, w));
        }
    }
        vector<int> distance(V, INT_MAX);
    set<pair<int, int>> st;
    
    distance[S] = 0;
    st.insert(make_pair(0, S));
    
    while (!st.empty()) {
        auto top = *(st.begin());
        int dist = top.first;
        int topNode = top.second;
        
        st.erase(st.begin());
        
        for (auto it : adj[topNode]) {
            if (dist + it.second < distance[it.first]) {
                auto record = st.find(make_pair(distance[it.first], it.first));
                if (record != st.end()) {
                    st.erase(record);
                }
                distance[it.first] = dist + it.second;
                st.insert(make_pair(distance[it.first], it.first));
            }
        }
    }
    
    return distance;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends