// Peak index of mountain array

#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int mountainPeak(int arr[], int n) {
    int start =0;
    int end = n - 1;
    int mid = start + (end-start)/2;

    while(start<end) {
        if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid+1]) {
            return arr[mid];
        }
        else if(arr[mid - 1] > arr[mid]) {
            end = mid;
        }
        else {
            start = mid;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main() {

    int arr[] = {3, 4, 5, 1};
    int arr1[] = {0,2,0};
    int arr2[] = {0, 10, 5, 2};


    print(arr, 4);
    print(arr1, 3);
    print(arr2, 4);
    cout<<"mountain peak is: "<<mountainPeak(arr, 4)<<endl;
    cout<<"mountain peak is: "<<mountainPeak(arr1, 3)<<endl;
    cout<<"mountain peak is: "<<mountainPeak(arr2, 4)<<endl;

    return 0;
}