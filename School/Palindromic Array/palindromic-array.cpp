//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:

    int PalinArray(int a[], int n)
    {
        for(int i=0;i<n;i++){
            
        
        int ans=0;
        int f=a[i];
    while(f>0){
        int r= f%10;
        f/=10;
        ans=(ans*10)+r;
        
    }
    if(ans!=a[i]){
        return 0;
    }
    
    	
    }
    return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends