// Alternate positive and negative numbers

#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n);
void reArrange(int arr[], int n);

int main() {

    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n  = 10;

    print(arr, n);
    reArrange(arr, n);
    print(arr, n);
    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reArrange(int arr[], int n) {
     vector<int> pos; 
     vector<int> neg;

    // copying negitive and positive integers in two different vectors
     for(int i{0}; i<n; i++) {
        if(arr[i] < 0) {
            neg.push_back(arr[i]);
        }
        else {
            pos.push_back(arr[i]);
        }
     }

    // updating the elements
     int i{0}, j{0}, k{0};
     while(j<pos.size() && k<neg.size()) {
        arr[i++] = pos[j++];
        arr[i++] = neg[k++];
     }

    // updating remaining elements
    // if positive elements are more
     while(j<pos.size()) {
        arr[i++] = pos[j++];
     }

    // if negitive elements are more
     while(k<neg.size()) { 
        arr[i++] = neg[k++];
     }
}