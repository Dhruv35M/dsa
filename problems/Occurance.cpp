// first and last Position of an element in sorted array
// first and last occurance of an element

#include <iostream>
using namespace std;

void print(int arr[], int n);
int firstOccurance(int arr[], int n, int key);
int lastOccurance(int arr[], int n, int key);
int totalOccurance(int arr[], int n, int key);

int main() {
    int arr[] = {1, 2, 3, 3, 3, 3, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 3;

    print(arr, size);
    cout<<"first occurance: "<<firstOccurance(arr, size, key)<<endl;
    cout<<"last occurance: "<<lastOccurance(arr, size, key)<<endl;
    cout<<"total occurance: "<<totalOccurance(arr, size, key)<<endl;

    return 0;
}


void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int firstOccurance(int arr[], int n, int key) {
    int start=0, end = n-1;
    int ans=-1;
    int mid = start + (end-start)/2;
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key) {
            end = mid-1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurance(int arr[], int n, int key) {
    int start=0, end = n-1;
    int ans=-1;
    int mid = start + (end-start)/2;
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > key) {
            end = mid-1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}


int totalOccurance(int arr[], int n, int key) {
    int startInd = firstOccurance(arr, n, key);
    int endInd = lastOccurance(arr, n, key);
    int total = endInd - startInd + 1;
    return total;
}
