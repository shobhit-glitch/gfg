//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToInfix(string pre) {
        // Write your code here
        stack<string>st;
        for(int i=pre.length()-1;i>=0;i--)
        {
            if(pre[i]=='+' || pre[i]=='-' || pre[i]=='*' || pre[i]=='/' || pre[i]=='^')
            {
                string a="",b = "";
                a  = st.top();
                st.pop();
                b = st.top();
                st.pop();
                string temp = '(' + a + pre[i] + b + ')';
                st.push(temp);
            }
            else
            {
                st.push(string(1, pre[i]));
            }
        }
        string ans = st.top();
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends