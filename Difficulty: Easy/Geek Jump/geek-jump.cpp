//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        int cnt=0;
        int i=n-1;
        /*while(i>=0){
            if(i==0){
                return cnt;
            }
            int one=INT_MAX;
            if(i-1>=0){
                one=abs(height[i]-height[i-1]);
            }
            int two=INT_MAX;
            if(i-2>=0){
                two=abs(height[i]-height[i-2]);
            }
            
            if(one<two){
                i--;
                cnt+=one;
            }
            if(two<one){
                i--;
                i--;
                cnt+=two;
            }
            
        }
        return cnt;*/
        vector<int> dp(n,-1);
  dp[0]=0;
  for(int ind=1;ind<n;ind++){
      int jumpTwo = INT_MAX;
        int jumpOne= dp[ind-1] + abs(height[ind]-height[ind-1]);
        if(ind>1)
            jumpTwo = dp[ind-2] + abs(height[ind]-height[ind-2]);
    
        dp[ind]=min(jumpOne, jumpTwo);
  }
  return dp[n-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends