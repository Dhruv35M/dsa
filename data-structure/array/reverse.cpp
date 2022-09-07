// reverse elements of the array

#include <iostream>
using namespace std;

void print(int arr[], int n);
void reverse(int arr[], int n);

int main() {

    int arr[] {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    print(arr, n);
    reverse(arr, n);

    cout<<"after reversing: "<<endl;
    print(arr, n);
    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[], int n) {
    int s {0}, e = n-1;
    while(s<=e) {
        swap(arr[s++], arr[e--]);
    }
}