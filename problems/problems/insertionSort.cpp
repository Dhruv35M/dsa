// sort array using insertion sort
#include <iostream>
using namespace std;

void print(int arr[], int n);
void insertionSort(int arr[], int n);

int main() {
    int arr[] = {21, 34, 6, 23, 5, 10, 31, 100, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    insertionSort(arr, n);
    print(arr, n);
    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


// void insertionSort(int arr[], int n) {
//     int i=1;
//     while(i<n) {
//         int temp = arr[i];
//         int j = i-1;

//         while(j>=0) {
//             if(arr[j] > temp) {
//                 arr[j+1] = arr[j];
//             }
//             else break;
//             j--;
//         }
//         arr[j+1] = temp;
//         i++;
//     }
// }


void insertionSort(int arr[], int n) {
    for(int i{1}; i<n; i++) {
        int key = arr[i];
        int j = i-1;
        
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}








// #include <iostream>
// #include <math.h>
// using namespace std;

// bool isPrime(int n) {
//     if(n <= 1) return 0;

//     for(int i=2; i<sqrt(n); i++) {
//         if((n%i) == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }


// int main() {
//     int n{0};
//     cin>>n;
//     isPrime(n)?cout<<"Prime\n":cout<<"Not Prime\n";
//     return 0;
// }