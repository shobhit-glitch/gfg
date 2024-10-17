//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
        int n=arr.size();
        int sumf=(n+1)*(n+2);
        sumf=sumf/2;
        //cout<<sumf<<endl;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return abs(sumf-sum);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
    }

    return 0;
}

// } Driver Code Ends