// sort array constains only 0's and 1's.

#include <iostream>
#include <math.h>
using namespace std;

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}

void sortArr(int arr[], int n) {
    int i=0, start = 0, end = n-1;
    while(start<end) {
        if(arr[start] == 0) {
            start++;
        }
        else if(arr[end] == 1) {
            end--;
        }
        else {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    } 
}

int main() {

    int arr[] {1, 0, 1, 0, 0, 1};
    print(arr, 6);
    sortArr(arr, 6);
    print(arr, 6);
    return 0;
}