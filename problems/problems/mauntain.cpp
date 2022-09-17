// peak element of a mountain array
#include <iostream>
using namespace std;

void print(int [], int);
int peak(int [], int);

int main() {

    // int arr[] = {0, 10, 5, 2};
    int arr[] = {3, 4, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    cout<<peak(arr, n);

    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int peak(int arr[], int n) {
    int s{0}, e {n-1}, mid{s +(e-s)/2};

    while(s<e) {
        if(arr[mid-1] < arr[mid] > arr[mid+1]) {
            s = mid;
            return mid;
        }  
        if(arr[mid] < arr[mid+1]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}