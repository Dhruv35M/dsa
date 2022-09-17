// let first number as minimum, i=0, j=i+1
// traverse i to n - 1 and j < n
// if (arr[i] > arr[j]) swap(arr[i], arr[j])

#include <iostream>
#define debug(x) cout << #x <<" "<< x <<endl;

using namespace std;

void print(int [], int);
void sort(int [], int);

int main() {

    int arr[] = {12, 3, 650, 0, 12};
    print(arr, 5);
    sort(arr, 5);
    print(arr, 5);
    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int arr[], int n) {
    for(int i{0}; i<n-1; i++) {
        for(int j{i+1}; j<n; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}


// void sort(int arr[], int n) {
//     for(int i{0}; i<n-1; i++) {
//         int midInd = i;
//         for(int j{i+1}; j<n; j++) {
//             if(arr[midInd] > arr[j]) {
//                 swap(arr[midInd], arr[j]);
//             }
//         }
//     }
// }