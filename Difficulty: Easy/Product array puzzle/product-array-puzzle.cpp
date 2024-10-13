//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        vector<long long int>ans;
        int n=nums.size();
        long long int prod=1;
        int zc=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zc++;
                
            }
            else{
                prod*=nums[i];
            }
            
            
        }
        for(int i = 0; i < n; i++){
        if(zc > 1) {
            // If there are more than one zero, all elements should be zero
            ans.push_back(0);
        } else if(nums[i] == 0 && zc == 1) {
            // If there is exactly one zero, only the position of that zero gets the product
            ans.push_back(prod);
        } else if(nums[i] != 0 && zc == 0) {
            // If no zeros, compute product except self
            ans.push_back(prod / nums[i]);
        } else {
            // If this element is non-zero but there is one zero in the array
            ans.push_back(0);
        }
    }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends