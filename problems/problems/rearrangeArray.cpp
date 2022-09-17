// // store the last element in temp
// // shift all elements by 1 from current index
// // set the value of temp at index

// #include <iostream>
// using namespace std;

// void print(int arr[], int n);
// void reArrange(int arr[], int n);
// void rightShift(int arr[], int n, int s);

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     print(arr, 5);
//     reArrange(arr, 5);
//     print(arr, 5);
//     return 0;
// }

// void print(int arr[], int n) {
//     for(int i{0}; i<n; i++) {
//         cout<<arr[i] << ' ';
//     }
//     cout<<endl;
// }

// void reArrange(int arr[], int n) {
//     int s {0}, e {n-1}, temp {-1};
//     while(s < e) {
//         temp = arr[e];
//         rightShift(arr, n, s);
//         arr[s] = temp;
//         s += 2;
//     }
// }

// void rightShift(int arr[], int n, int s) {
//     int e = n-1;
//     while(e > s) {
//         arr[e] = arr[e - 1];
//         e--;
//     }
// }

// **************************************************************************************
//                                      better approach
// **************************************************************************************

#include <iostream>
using namespace std;

void print(int arr[], int n);
void reArrange(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    // int arr[] = {10,20,30,40,50,60,70,80,90,100,110};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    reArrange(arr, n);
    print(arr, n);

    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i] << ' ';
    }
    cout<<endl;
}

void reArrange(int arr[], int n) {
  int min = 0, max = n-1, i=0;
  long maxElement = arr[n-1]+1;
//   cout<<maxElement<<endl;

  if(n == 1) return;

  while(i<n) {
    if(i%2 == 0) {
        arr[i] = arr[i] + (arr[max] % maxElement) * maxElement;
        max--;
    }
    else {
        arr[i] = arr[i] + (arr[min]%maxElement) * maxElement;
        min++;
    }
    i++;
  }

  i = 0;
  while(i<n) {
    arr[i] /= maxElement;
    i++;
  }
}