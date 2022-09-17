// binary Search

#include <iostream>
using namespace std;

void print(int [], int);
int binarySearch(int [], int, int);

int main() {
    int arr[] = {12, 21, 32, 34, 56, 76, 89};
    int key{0};
    print(arr, 7);
    cout<<"Enter the key to search: ";
    cin>>key;
    cout<<binarySearch(arr, 7, key);
    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binarySearch(int arr[], int n, int key) {
    int start {0};
    int end {n};
    int i {0};

    int mid = start + (end-start)/2;

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }
       else if(arr[mid] < key) {
            start = mid + 1;
       }
       else {
            end = mid - 1;
       }
       mid = start + (end-start)/2;
    }
    return -1;
}