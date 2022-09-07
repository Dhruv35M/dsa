// an array have all elements twice except 1 element find that element

#include <iostream>
using namespace std;

void print(int [], int);
int findUnique(int [], int);

int main() {
    int arr[] {1, 0, 2, 2, 4, 3, 3, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    cout<<"Unique: "<<findUnique(arr, n)<<endl;
    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int findUnique(int arr[], int n) {
    int ans;                    // using XOR operator
    for(int i{0}; i<n; i++) {   // a^0 = a;
        ans = ans^arr[i];       // a^a = 0;
    }                           // 
    return ans;
}