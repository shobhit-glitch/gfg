//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        int mod=1e9+7;
        vector<long long> v;
        for(long long i=0;i<n;i++){
            v.push_back(a[i]);
        }
        sort(v.begin(), v.end());
        long long sum=0;
        
        for(long long i=0;i<n;i++){
            long long n=0;
            n=v[i]*i;
            sum+=n;
        }
        return (sum%mod);
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends