//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    //map<int,int>mp;
	    //for(int i=0;i<n;i++)
	    int i=0;
	    int cnt=0;
	    sort(arr,arr+n);
	    //for(int i=0;i<n;i++){
	        
	    //}
	    while(i<n){
	        if(arr[i]==x){
	            break;
	        }
	        i++;
	    }
	    for(int j=i;j<n;j++){
	        if(arr[j]==x){
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
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends