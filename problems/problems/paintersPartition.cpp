// painter's partition problem
// We have to paint n boards of length {A1, A2…An}. There are k painters available and each takes 1 unit of time to paint 1 unit of the board. The problem is to find the minimum time to get this job was done under the constraints that any painter will only paint continuous sections of boards, say board {2, 3, 4} or only board {1} or nothing but not board {2, 4, 5}.

#include <iostream>
using namespace std;

int bestPartition(int arr[], int n, int m);
bool isValid(int arr[], int n, int m, int mid);

int main()
{
    int arr[]{5, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    cout<< bestPartition(arr, n, m);
    return 0;
}


bool isValid(int arr[], int n, int m, int mid) {
    int painterCount{0}, unitSum{0};
    for(int i{0}; i<n; i++) {
        if(unitSum + arr[i] <= mid) {
            unitSum += arr[i];
        }
        else {
            painterCount++;
            if(arr[i] > mid || painterCount > m) return false;
            unitSum = arr[i];
        }
    }
    return true;
}

int bestPartition(int arr[], int n, int m) {
    int s{0}, e {0}, res{-1};

    for(int i{0}; i<n; i++) {
        if(arr[i] > s) s = arr[i]; // largest in array
        e += arr[i]; // sum of array
    }

    int mid = s + (e-s)/2;
    while(s<=e) {
        if(isValid(arr, n, m, mid)) {
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

