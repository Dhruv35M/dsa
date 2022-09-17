// mearge two sorted array

#include <iostream>
using namespace std;

void print(int [], int);
void meargeArr(int [], int [], int [], int, int);

int main() {

    int arr1[] = {1, 2, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 50};
    int n= sizeof(arr1)/sizeof(arr1[0]);
    int m= sizeof(arr2)/sizeof(arr2[0]);
    
    int arr3[m+n] {0};

    cout<<"array 1: "<<endl;
    print(arr1, n);

    cout<<"array 2: "<<endl;
    print(arr2, m);

    meargeArr(arr1, arr2, arr3, n, m);
    
    cout<<"array 3: "<<endl;
    print(arr3, m+n);

    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void meargeArr(int arr1[], int arr2[], int arr3[], int n, int m) {
    int i{0}, j{0}, k{0};

    while (i<n && j<m)
     {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else {
            arr3[k++] = arr2[j++];
        }
    }

    // copying remaining elements from v1(if exist)
    while(i<n) {
        arr3[k++] = arr1[i++];
    }

    // copying remaining elements from v2(if exist)
    while(j<m) {
        arr3[k++] = arr2[j++];
    }
}
