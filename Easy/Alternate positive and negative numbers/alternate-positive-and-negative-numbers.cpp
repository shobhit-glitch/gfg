//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> positive,negative,v;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            positive.push_back(arr[i]);
	            
	        }
	        else{
	            negative.push_back(arr[i]);
	        }
	        
	    }
	    int l=0,m=0;
	    while(l<positive.size() && m<negative.size()){
	        v.push_back(positive[l++]);
	        v.push_back(negative[m++]);
	        
	    }
	    while(l<positive.size()){
	        v.push_back(positive[l++]);
	    }
	    while(m<negative.size()){
	        v.push_back(negative[m++]);
	    }
	    
	    for(int k=0;k<v.size();k++){
	        arr[k]=v[k];
	    }
	   
	   
	       
	    
	    
	    
	    
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
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends