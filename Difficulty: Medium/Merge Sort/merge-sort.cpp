//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
         // Your code here
         vector<int>temp;
         int i=l,j=mid+1;
         while(i<=mid && j<=r){
             if(arr[i]<=arr[j]){
                 temp.push_back(arr[i]);
                 i++;
             }
             else{
                 temp.push_back(arr[j]);
                 j++;
             }
         }
         while(i<=mid){
             temp.push_back(arr[i]);
             i++;
         }
         while(j<=r){
             temp.push_back(arr[j]);
             j++;
         }
         for(int k=l;k<=r;k++){
             arr[k]=temp[k-l];
         }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r){
            return ;
        }
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends