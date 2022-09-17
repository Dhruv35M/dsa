// return true if array is sorted and rotated else return false

#include <iostream>
using namespace std;

void print(int [], int);
bool isSortedRotated(int [], int);

int main() {
    int arr[] = {3, 4, 5, 1, 2};
    print(arr, 5);
    isSortedRotated(arr, 5) ? cout<<"yes! This array is sorted and rotated." : cout<<"No! This array isn't sorted and rotated.";
    return 0;
}

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool isSortedRotated(int arr[], int n) {
    int count{0};

    for(int i{1}; i<n; i++) {
        if(arr[i-1] > arr[i]) count++;
        if(arr[n-1] > arr[0]) count ++;
    }
    return count<=1;
}
