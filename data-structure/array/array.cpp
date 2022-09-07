#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {

    int arr[5];
    
    // taking input form the user
    cout<<"Enter 5 Elements: ";
    for(int i{0}; i<5; i++) {
        cin>>arr[i];
    }

    // printing array elements
    print(arr, 5);

    return 0;
}