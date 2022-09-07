// array must be sorted -> devide the array on every search

#include <iostream>
using namespace std;

void print(int arr[], int);
int binarySearch(int [], int, int);

int main() {
    int arr[] {1, 2, 3, 26, 78, 100, 120};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    int key{0};
    cout<<"Enter the element to search: ";
    cin>>key;
    
    int result = binarySearch(arr, n, key);
    result ? cout<<"Element is present at index "<<result<<" index.\n" : cout<<"Element is not present in the array"<<endl;

    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binarySearch(int arr[], int n, int key) {
    int start{0}, end{n-1};
    int mid = start + (end-start)/2;

    while(start<=end) {
        if(arr[mid] == key) { // Element is found
            return mid;
        }
        else if(arr[mid] < key) { // moving towards mid's right side
            start = mid + 1;
        }
        else { // moving towards mid's left side
            end = mid - 1;
        }
        mid = start + (end-start)/2; // after every time searching updating the mid
    }
    return -1;
}