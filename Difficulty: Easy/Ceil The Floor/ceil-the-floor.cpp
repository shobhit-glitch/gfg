//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
    int l = 0, r = n - 1;
    int floor = -1, ceil = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] <= x) {
            floor = arr[mid];
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    // Resetting the pointers for finding the ceiling
    l = 0, r = n - 1;

    // Finding the ceiling
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] >= x) {
            ceil = arr[mid];
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    // Returning the floor and ceiling values
    return {floor, ceil};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends