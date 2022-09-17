#include <bits/stdc++.h>
using namespace std;

int maxDist(int arr[], int n, int m);
bool isValid(int arr[], int n, int m, int mid);

int main() {
    int arr[] {4, 2, 1, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 2;
    cout<<maxDist(arr, n, m);
    return 0;
}

int maxDist(int arr[], int n, int m) {
    sort(arr, arr+n);

    int s {arr[0]}, e {arr[n-1]-s}, res{-1};

    int mid = s + (e-s)/2;
    while(s<=e) {
        if(isValid(arr, n, m, mid)) {
            res = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return res;
}

bool isValid(int arr[], int n, int m, int mid) {
    int cowCount{1}, lastPosition{arr[0]};

    for(int i{0}; i<n; i++) {
        if(arr[i] - lastPosition >= mid) {
            cowCount++;
            if(cowCount == m) {
                return true;
            }
            lastPosition = arr[i];
        }
    }
    return false;
}

    // int i{0}, j{1};
    // while(i<n) {
    //     if(abs(arr[j]-arr[i]) > mid) {
    //         j++;
    //     } 
    //     else { 
    //         if(abs(arr[j] - arr[i]) > lastPosition)
    //             lastPosition = abs(arr[j] - arr[i]);
    //             return true;
    //     }
    // }
    // return false;