#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void intersection(int arr1[], int arr2[], int result[], int n, int m, int res) {
    // int k=0;
    // for(int i{0}; i<n; i++) {
    //     for(int j{0}; j<m; j++) {
    //         if(arr1[i] < arr2[j]) i++;

    //         if(arr1[i] == arr2[j]) {
    //             // cout<<"equal hai: "<<arr1[i]<<endl;
    //             result[k] = arr2[j];
    //             k++;
    //             i++;
    //         }
    //     }
    // }

    // better approach -> two pointer approach
    int i=0, j=0, k=0;
    while(i<n & j<m) {
        if(arr1[i] == arr2[j]) {
            result[k] = arr2[j];
            k++;
            i++;
        }
        if(arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
}


int main() {

    int arr1[] {1, 2, 2, 2, 3, 4};
    int arr2[] {2, 2, 3, 3};
    int result[4] {0};
    int n = 6, m = 4;

   intersection(arr1, arr2, result, n, m, 3);
   print(arr1, 6);
   print(arr2, 4); 
   print(result, 3);

    return 0;
}