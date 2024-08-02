//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int xorfin(int n){
      if(n%4==1){
          return 1;
      }
      else if(n%4==2){
          return n+1;
      }
      else if(n%4==3){
          return 0;
      }
      else{
          return n;
      }
      
  }
    int findXOR(int l, int r) {
        // complete the function here
        /*int ans=l;
        for(int i=l+1;i<=r;i++){
            ans=ans^i;
        }
        return ans;*/
        //TIME COMPLEXITY IS HIGH 
        //OTHER METHOD 
        return xorfin(r)^xorfin(l-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        // Input

        int l, r;
        cin >> l >> r;

        Solution obj;
        cout << obj.findXOR(l, r) << endl;
    }
}
// } Driver Code Ends