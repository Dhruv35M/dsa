// sort an array using selection sort

#include <iostream>
using namespace std;

void print(int [], int);
void sort(int [], int);

int main() {
    int arr[] {1, 23, 10, 2, 199, 2, 4, 12, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    sort(arr, n);
    print(arr, n);
    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int arr[], int n) {
    for(int i{0}; i<n; i++) { // let arr[i] is minimum
        for(int j{i}; j<n; j++) {
            if(arr[i] > arr[j]) // find the minimum value between (i+1 to n-1)
                swap(arr[i], arr[j]); // swaping it with arr[i]
        }
    }
}
