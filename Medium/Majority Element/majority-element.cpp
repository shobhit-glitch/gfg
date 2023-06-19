//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


    #include <algorithm>
#include <climits>

class Solution {
public:
    // Function to find the majority element in the array
    // a: input array
    // size: size of the input array
    int majorityElement(int a[], int size) {
        sort(a, a + size);
        int maxNo = a[size - 1];

        int vis[maxNo + 1]; 
        for (int i = 0; i <= maxNo; i++) {
            vis[i] = 0; 
        }

        for (int i = 0; i < size; i++) {
            vis[a[i]] += 1;
        }

        int major = INT_MIN;
        for (int i = 0; i <= maxNo; i++) {
            if (vis[i] > size / 2) {
                major = i;
                break;
            }
        }

        if (major != INT_MIN) {
            return major;
        } else {
            return -1;
        }
    }
};



//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends