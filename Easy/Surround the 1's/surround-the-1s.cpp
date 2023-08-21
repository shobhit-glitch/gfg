//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int n=matrix.size();
        int m=matrix[0].size();
        int ans=0;
        int row[]={-1,-1,0,1,1,1,0,-1};
        int col[]={0,-1,-1,-1,0,1,1,1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    int zeros=0;
                    for(int idx=0;idx<8; idx++){
                        int newrow=i+row[idx];
                        int newcol=j+col[idx];
                        if(isValid(n,m,newrow,newcol)&& matrix[newrow][newcol]==0){
                            zeros++;
                        }
                    }
                    if(zeros !=0 && zeros%2==0){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
    bool isValid(int row,int col,int x,int y){
        return x>=0 && x<row && y>=0 && y<col;
    }
    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends