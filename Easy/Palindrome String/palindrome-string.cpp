//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int n=S.length();
	    if(n%2==1){
	        return 0;
	    }
	    int flag=1;
	    for(int i=0;i<n;i++){
	        if(S[i]!=S[n-i-1]){
	            flag=0;
	            break;
	        }
	    }
	    if(flag==0){
	        return 0;
	    }
	    else{
	        return 1;
	    }
	    
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends