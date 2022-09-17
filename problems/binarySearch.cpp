#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    // int mid = (start + end)/2;
    int mid = start + (end - start / 2);

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start / 2);
    }
    return -1;
}

int main() {

    int arr[5] = {1,2,3,4,5};
    int key = 4;
    
    print(arr, 5);
    cout<<key<<" is at index: "<<binarySearch(arr, 5, key);
    return 0;
}