//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void Reverse(stack<int> &st){
        /*stack<int>s;
        while(!st.empty()){
            s.push(st.top());
            st.pop();
            
        }
        while(!s.empty()){
            st.push(s.top());
            s.pop();
        }*/
        vector<int>v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
            
        }
        for(int i=0;i<v.size();i++){
            st.push(v[i]);
        }
        
       
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends