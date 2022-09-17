#include <iostream>
using namespace std;

void display(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArr(int arr[], int n) {
    int start=0, end=n-1;

    for(int i{0}; start <= end; i++) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void swapAlternate(int arr[], int n) {
    for(int i{0}; i+1 < n; i+=2) {
        swap(arr[i], arr[i+1]);
    }
}

int findUnique(int arr[], int n) {
    int ans = 0;
    for(int i {0}; i<n; i++) {
        ans = ans^arr[i];
    }
    return ans;
}
 

int main() {
    int number[10] = {12, 34,43, 23, 10, 343};

    int arr[] = {3, 2, 3, 1, 4, 4, 1};

    display(number, 6);
    // reverseArr(number, 5);
    swapAlternate(number, 6);
    display(number, 6);

    cout<<"Unique: "<<findUnique(arr, 7);

    // in built function min & max no need to import math.h

    // cout<<"max is: "<< max(10, number[2])<<endl;
    // cout<<"min is: "<< min(10, number[2])<<endl;

    // data type of args should be same.
    // cout<<"max: "<<max(10, 20.32);

    

    return 0;
}