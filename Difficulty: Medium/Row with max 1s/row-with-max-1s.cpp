//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
  int func(vector<int>matrix,int m){
      int ans=m;
      int l=0;
      int r=m-1;
      while(l<=r){
          int mid=l+(r-l)/2;
          if(matrix[mid]>=1){
              ans=mid;
              r=mid-1;
          }
          else{
              l=mid+1;
          }
      }
      ans=m-ans;
      return ans;
  }
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        int n=arr.size();
        int m=arr[0].size();
        int res=0;
        int ind=-1;
        for(int i=0;i<n;i++){
            //res=max(res,func(arr[i],m));
            int curr=func(arr[i],m);
            if(curr>res){
                res=curr;
                ind=i;
            }
        }
        return ind;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends