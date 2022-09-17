// first and last occurance 

#include <iostream>
using namespace std;

void print(int [], int);
int firstOcc(int [], int, int);
int lastOcc(int [], int, int);

int main() {
    int arr[] {5,7,7,8,8,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key {8};

    print(arr, n); 
    cout<<"First Occurance at index: ";   
    cout<<firstOcc(arr, n, key)<<endl;

    cout<<"Last Occurance at index: ";   
    cout<<lastOcc(arr, n, key)<<endl;

    cout<<"total occurance: "<<lastOcc(arr, n, key) - firstOcc(arr, n, key) + 1<<endl;
    
    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int firstOcc(int arr[], int n, int key) {
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    int ans{-1};
    while (s<=e)
    {
        if(arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) { // right me jao
            s = mid + 1;
        }
        else { // left me jao
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {
    int s{0}, e{n-1}, mid{s + (e-s)/2};
    int ans{-1};

    while(s<=e) {
        if(arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        }
        else if(key < arr[mid]) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}