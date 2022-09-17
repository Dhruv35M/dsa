// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int arr[], int n) {
   // selection sort
    // for(int i{0}; i<n; i++) {
    //     for(int j{i+1}; j<n; j++) {
    //         if(arr[i] > arr[j]) {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }
    
    // bubble sort
    // for(int i{0}; i<n; i++) {
    //     for(int j{i+1}; j<n; j++) {
    //         if(arr[i] > arr[j]) {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }
    
    // insertion sort
     int i=1;
     while(i<n) {
         int temp = arr[i];
         int j = i-1;
         
         while(j>=0) {
             if(arr[j] > temp) {
                //  shift the element
                arr[j+1] = arr[j];
             }
             else { // bahar aa jao
                 break;
             }
         j--;
         }
         arr[j+1] = temp;
         i++;
     }
    
}

int main() {
    int arr[] = {2, 3, 100, 3, 1, 3, 6};
    print(arr, 7);
    sort(arr, 7);
    print(arr, 7);
    return 0;
}