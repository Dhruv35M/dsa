// linear search is simple search, searing the result from left to right one by one

#include <iostream>
using namespace std;

void print(int [], int);
int search(int [], int, int);

int main() {
    int arr[] {1, 12, 3, 103, 53, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,  n);
    int key;
    cout<<"Enter the element to search: ";
    cin>>key;
    
    int result = search(arr, n, key);
    result ? cout<<"Element is present at index "<<result<<" index.\n" : cout<<"Element is not present in the array"<<endl;

    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int search(int arr[], int n, int key) {
    for(int i{0}; i<n; i++) { 
        if(arr[i] == key) { // looping through array until element found or array ends.
            return i;
        }
    }
    return -1;
}