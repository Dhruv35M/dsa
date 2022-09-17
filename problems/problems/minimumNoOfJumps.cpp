//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        
        int jumpCount {0};
        int max{INT_MIN};
        int step {0};
        for(int i=0; i<n; i++) {
            if(arr[i]<=0) return -1;
            
            step = arr[i];
            
            for(int j{i}; j<=step; j++) {
                if(max < arr[j]) {
                    max = arr[j];
                }
            }
            
            i += max;
            jumpCount++;
            
        }
        
        return jumpCount;
    }
}; 


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


// // minimum number of jumps to end of array

// #include <iostream>
// using namespace std;

// int minJumps(int arr[], int n){
//     int jumpCount {0};
//     int i = 0;
//     while(i<n) {
//         if(arr[i] <= 0) return -1;
//         cout<<"before change: "<<i<<"=>"<<arr[i]<<" ";

//         if(arr[i] < arr[i+1] && i+arr[i] < n-1){
//             i += arr[i+1];    
//         }
//         else {
//             i += arr[i];
//         }

//         // cout<<i<<"=>"<<arr[i]<<" ";
//         jumpCount++;
//     }
//     cout<<endl;
//     return jumpCount;
// }

// int main() {
//     int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
//     cout<<minJumps(arr, 11);
//     // int arr[] = {1, 4, 3, 2, 6, 7};
//     // cout<<minJumps(arr, 6);
//     // int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
//     // cout<<minJumps(arr, 11);
//     return 0;
// }