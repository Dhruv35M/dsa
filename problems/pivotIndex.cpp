// minimun of a sorted rotated array

#include <iostream>
using namespace std;

void print(int [], int);
int pivotInd(int [], int);

int main() {
    int nums[] = {7, 9, 2, 5, 6};
    int nums1[] = {1, 7, 3, 6, 5, 6};
    int arr[] = {4,5,6,7,0,1,2};

    print(arr, 7);
    cout<<"pivot index: "<<pivotInd(arr, 7)<<endl;
    print(nums, 5);
    cout<<"pivot index: "<<pivotInd(nums, 5)<<endl;
    print(nums1, 6);
    cout<<"pivot index: "<<pivotInd(nums1, 6)<<endl;
    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int pivotInd(int arr[], int n) {
    int s = 0, e = n - 1;
    int mid = s + (e-s)/2;

    while(s < e) {
        if(arr[mid] >= arr[0]) {
            s = mid+1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}