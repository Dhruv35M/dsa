#include <iostream>
using namespace std;

void print(int [], int);
void bubbleSort(int [], int);

int main() {
    int arr[] = {12, 3, 124, 6, 7, 32};
    // int arr[] = {3, 12, 6, 7, 32, 124};
    print(arr, 6);
    bubbleSort(arr, 6);
    print(arr, 6);
    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        bool swapped = false;
        for(int j{0}; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                bool swapped = true;
            }
        }
        if (swapped == false) // means array already sorted
        break;
    }
}