 // move zeros to the right side

// better approach - two pointer
#include <iostream>
using namespace std;

void print(int [], int);
void moveZero(int [], int);

int main() {
    int arr[6] = {0, 1, 0, 3, 12, 0};
    print(arr, 6);
    moveZero(arr, 6);
    print(arr, 6);
    return 0;
}

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void moveZero(int arr[], int n) { // shifting all non zero elements to the left
    int nonZero=0;
    for(int j=0; j<n; j++) {
        if(arr[j] != 0) {
            swap(arr[j], arr[nonZero]);
            nonZero++;
        }
    }
}


// my ways

// #include <iostream>
// using namespace std;

// void print(int [], int);
// void moveZero(int [], int);
// void leftShift(int [], int, int);

// int main() {

//     int arr[6] = {0, 1, 0, 3, 12, 0};
//     print(arr, 6);
//     moveZero(arr, 6);
//     // leftShift(arr, 6, 2);
//     print(arr, 6);
//     return 0;
// }

// void print(int arr[], int n) {
//     for(int i{0}; i<n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void moveZero(int arr[], int n) {
//     int i{0}, count{0}, nonZeroCount{0};
    
//     while(i<n) { // counting the zeros
        
//         if(arr[i] == 0) {  // shifting elements towards left
//             leftShift(arr, n, i);
//             count++;
//         }

//         else {  
//             nonZeroCount++; // counting the non - zero elements
//         }
//         i++;
//     }

//     // cout<<"count is: "<<count<<endl;
//     // cout<<"non zero elements: "<<nonZeroCount<<endl;

//     // adding zeros
//     int j=nonZeroCount;
//     while (j<n)
//     {
//         arr[j] = 0;
//         j++;
//     }
    
// }

// void leftShift(int arr[], int n, int ind) {
//     for(int i{ind}; i<n; i++) {
//         arr[i] = arr[i+1];
//     }
// }
