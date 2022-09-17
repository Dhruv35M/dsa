// duplicate in array with element [1, N-1]

#include <iostream>
using namespace std;

void display(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int findDuplicate(int arr[], int n) {
    int ans=0;
    // OXR ing all elements
    for(int i=0; i<n; i++) {
        ans = ans^arr[i];
    }

    // XOR [1, n-1]
    for(int i=1; i<n; i++) {
        ans = ans^i;
    }

    return ans;
}


int main() {
    int arr[] = {1, 2, 5, 3, 4, 6, 3};

    display(arr, 7);
    cout<<"duplicate is: "<<findDuplicate(arr, 7);
    return 0;
}
