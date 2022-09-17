// Search an element in a sorted and rotated Array

#include <iostream>
using namespace std;

void print(int [], int);
int binarySearch(int [], int, int, int);
int getPivotInd(int [], int);
int findElement(int [], int, int);

int main() {
    int arr[] = {8, 11, 0};
    // int arr[] = {8, 11, 12, 0, 1, 3, 5};
    // int key=11;
    int key=11;

    print(arr, 3);
    cout<<key<<" is present at index: "<<findElement(arr, 3, key)<<endl;

    return 0;
}

void print(int arr[], int n) {
    int i{0};
    while(i<n) {
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
}

int getPivotInd(int arr[], int n) {
    int s=0, e=n-1, mid = s+(e-s)/2;
    while(s<e) {
        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int findElement(int arr[], int n, int key) {
    int pivot = getPivotInd(arr, n);
    // I have pivot, key, firstElement, lastElement
    // yadi mera key arr to pivot ke bich me hai to part one me search karo varna part2 me
    // largest no alway be at position arr[pivot - 1];
    
    if(key == arr[pivot]) {
        return pivot;
    }
    else if(key >= arr[pivot] && key <= arr[pivot - 1]) {
        return binarySearch(arr, pivot-1, n, key);
    }
    else {
        return binarySearch(arr, 0, pivot, key);
    }
return -1;
}


int binarySearch(int arr[], int startInd, int n, int key) {
    int s=startInd , e = n - 1;
    int mid = s + (e-s)/2;
    while(s <= e) {
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}