//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
            
        }
        for(auto it:m){
            if(it.second>1){
                v.push_back(it.first);
            }
        }
        sort(v.begin(),v.end());
        if(v.size()==0){
            v.push_back(-1);
        }
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends