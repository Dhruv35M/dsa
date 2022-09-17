// mearge two sorted array

#include <iostream>
using namespace std;

void print(int [], int);
void meargeArr(int [], int [], int, int);
void shiftRight(int [], int, int);

int main() {

    int arr1[] = {1, 2, 3, 0, 0, 0};
    int arr2[] = {2, 4, 6, 50};
    int n= sizeof(arr1)/sizeof(arr1[0]);
    int m= sizeof(arr2)/sizeof(arr2[0]);
    
    int arr3[m+n] {0};

    cout<<"array 1: "<<endl;
    print(arr1, 3);

    cout<<"array 2: "<<endl;
    print(arr2, m);

    meargeArr(arr1, arr2, 3, m);
    
    cout<<"array 1: "<<endl;
    print(arr3, m+n);

    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void meargeArr(int arr1[], int arr2[], int n, int m) {
    int i{0}, j{0}, k{0};

    while (i<m+n && j<m)
     {
        if(arr1[i] < arr2[j]) {
            arr1[k++] = arr2[i++];
            shiftRight(arr1, (m+n), (k-1));
        }
        else {
            arr1[k++] = arr2[j++];
            shiftRight(arr1, (m+n), (k-1));
        }
    }

    // copying remaining elements
    while(i<m+n) {
        arr1[k++] = arr2[i++];
    }
}


void shiftRight(int arr[], int n, int k) {
    for(int i{k}; i<n; i++) {
        arr[i+1] = arr[i];
    }
}