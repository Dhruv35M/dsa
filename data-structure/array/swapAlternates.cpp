// reverse the alternate elements of the array

#include <iostream>
using namespace std;

void print(int [], int);
void swapAlternates(int [], int);

int main() {
    int arr[] {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    swapAlternates(arr, n);
    print(arr, n);
    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternates(int arr[], int n) {
    for(int i{0}; i+1<n; i+=2) {
        swap(arr[i], arr[i+1]);
    }
}