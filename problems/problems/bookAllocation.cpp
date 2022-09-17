// Book allocation problem 

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int k, int mid) {
    int student {1};
    int pageSum {0};
    for(int i{0}; i<arr.size(); i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            student++;
            if(student > k || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int bookAllocate(vector<int> arr, int k) {
    int s{0}, e{0};
    if(k > arr.size()) return -1;
    for(int i{0}; i<arr.size(); i++) {
        if(arr[i] > s) { // finding the maximum pages
            s = arr[i];
        } 
        e += arr[i]; // sum of all pages
    }

    int mid = s + (e-s)/2;
    int res{-1};
    while(s<=e) {
        if(isPossible(arr, k, mid)) {
            res = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return res;
}

int main() {
    int k=2;
    vector<int> arr {10, 20, 30, 40};
    cout<<bookAllocate(arr, k);
    return 0;
}


// #include <iostream>
// using namespace std;

// bool isValid(int arr[], int n, int m);
// int allocBook(int arr[], int n, int m);

// int main() {
//     int arr[] = {10, 20, 30, 40};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int m = 2;
//     cout<<allocBook(arr, n, m);
//     return 0;
// }

// bool isValid(int arr[], int n, int m, int mid) {
//     int studentCount{1}, sum {0};
//     for(int i{0}; i<n; i++) {
//         if(sum + arr[i] <= mid) {
//             sum += arr[i];
//         }
//         else {
//             studentCount++;
//             if(arr[i] > mid || studentCount > m) return false;
//             sum = arr[i];
//         }
//     }
//     return true;
// }

// int allocBook(int arr[], int n, int m) {
//     int s{0}, e{0}, res{-1};
//     if(m > n) return -1;
    
//     for(int i{0}; i<n; i++) {
//         if(arr[i] > s) s = arr[i]; // maximum
//         e += arr[i]; // sum of all
//     }
    
//     int mid = s + (e-s)/2;
//     while(s<=e) {
//         if(isValid(arr, n, m, mid)) {
//             res = mid;
//             e = mid - 1;
//         }
//         else {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return res;
// }