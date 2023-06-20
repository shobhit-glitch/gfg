//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            int i=0;
            vector<int> pos,neg,v;
            while(i<n){
                if(arr[i]>=0){
                    pos.push_back(arr[i]);
                }
                else{
                    neg.push_back(arr[i]);
                }
                i++;
            }
            int j=0,k=0,f=0;
            while(j<neg.size()){
                arr[f]=neg[j];
                j++;
                f++;
            }
            while(k<pos.size()){
                arr[f]=pos[k];
                k++;
                f++;
            }
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends