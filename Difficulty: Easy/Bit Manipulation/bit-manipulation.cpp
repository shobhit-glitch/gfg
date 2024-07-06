//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  /*int convtoDec(string s){
      int p2=1;
      int res=0;
      int n =s.length();
      for(int i=n-1;i>=0;i--){
          if(s[i]=='1'){
              res+=p2;
          }
          p2*=2;
          
          
      }
      return res;
  }*/
    void bitManipulation(int numm, int i) {
       /* // your code here
        //CONVERT DEC TO BINAY FIRST
        string s="";
        int num=numm;
        while(num>0){
            int res=num%2;
            if(res==1){
                s+='1';
            }
            else if(res==0){
                s+='0';
            }
            num=num/2;
        }
        
        reverse(s.begin(),s.end());
        //cout<<s<<endl;
        int n=s.length();
        cout<<s[n-i-1]<<" ";
        if(s[n-i-1]=='1'){
            cout<<numm<<" ";
            s[n-i-1]='0';
            int f=convtoDec(s);
            cout<<f;
            //cout after clearing the bit
            
        }
        else{
            s[n-i-1]='1';
            int f1=convtoDec(s);
            cout<<f1<<" ";
            //cout after setting the ith bit 
            cout<<numm;
        }*/
        cout<<((numm>>i-1)&1)<<" ";
        cout<<((1<<i-1)| numm)<<" ";
        cout<<(~((1<<i-1))&numm);
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends