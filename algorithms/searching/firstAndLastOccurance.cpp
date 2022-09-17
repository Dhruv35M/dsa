// find the first and last occurance index of an Element in a sorted array

#include <bits/stdc++.h>
using namespace std;

void print(int [], int);
int firstOcc(int [], int, int);
int lastOcc(int [], int, int);
pair<int, int> firstAndLastOcc(int [], int, int);

int main() {
    // int arr[] {1, 3, 5, 5, 5, 6, 17, 29};
    int arr[] {12, 32, 32, 32, 54, 67, 78, 78, 89};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key{0};

    print(arr, n);
    cout<<"Enter key: ";
    cin>>key;

    pair<int, int> p = firstAndLastOcc(arr, n, key);
    cout<<"First occurance at index: "<<p.first<<" \nLast Occurance at index: "<<p.second<<endl;

    cout<<"difference between first and last occurance: "<<p.second - p.first<<endl;
    return 0;
}


void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int firstOcc(int arr[], int n, int key) {
    int s{0}, e{n-1};
    int ans{-1};
    int mid = s + (e-s)/2;

    while(s<=e) {
        if(arr[mid] == key) {
            ans = mid;         // storing the mid in ans
            e = mid - 1;      //  move end to (mid - 1) -> first half;
        }
        else if(arr[mid] < key) {
            s = mid + 1;      // if key is greater than move start
        }
        else {
            e = mid - 1;      // if key is smaller than moving the end to mid-1
        }
        mid = s + (e-s)/2;    // updating the mid
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {
    int s{0}, e{n-1}, ans {-1};
    int mid = s + (e-s)/2;

    while(s<=e) {
        if(arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < key) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastOcc(int arr[], int n, int key) {
    pair<int, int> p; 
    p.first = firstOcc(arr, n, key);
    p.second = lastOcc(arr, n, key);
    return p;
}
