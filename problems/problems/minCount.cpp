// count of all minimun integer at right side

#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void minCount(int arr[], int n, int res[]) {
    int count {0};
    for(int i{0}; i<n;i++) {
        int currVal = arr[i];
        for(int j{i}; j<n; j++) {
            if(arr[j] < currVal) {
                count++;
            }
        }
        res[i] = count;
        count = 0;
    }
}

int main() {
    int arr[] = {12, 1, 2, 3, 0, 11, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res[7] {0};
    minCount(arr, n, res);
    print(arr, n);
    print(res, n);
    return 0;
}