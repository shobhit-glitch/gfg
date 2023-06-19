//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        sort(arr,arr+n);
        int max=arr[n-1];
        int vis[max];
        for(int i=1;i<=max;i++){
            vis[i]=0;
        }
        int x;
        for(int i=0;i<n;i++){
            x=arr[i];
            vis[x]+=1;
        }
        int cnt=0;
        int f=n/k;
        for(int i=1;i<=max;i++){
            if(vis[i]>f){
                cnt++;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends