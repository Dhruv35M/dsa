#include <iostream>
using namespace std;

void print(int [], int);
void reverse(int [], int);
void reverseAfterInd(int [], int, int);
int main() {

    int arr[] = {1, 2, 34, 43, 2};
    print(arr, 5);   

    reverseAfterInd(arr, 5, 3);
    print(arr, 5);
    
    // reverse(arr, 5);
    // cout<<"after reverse: "<<endl;
    // print(arr, 5);    

    return 0;
}

void print(int arr[], int n) {
    for(auto i{0}; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[], int n) {
    auto start {0}, end {n-1};
    while(start<end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void reverseAfterInd(int arr[], int n, int k) {
    auto start {k}, end {n-1};
    while(start<end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }   
}



// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// #define print(x) cout << #x <<" ->  "<< x <<endl;

// void printv(vector<int>);

// int main() {
//     vector<int> v = {11, 3, 5, 23, 53};
//     printv(v);

//     reverse(v.begin(), v.end());
//     printv(v);

//     return 0;
// }

// void printv(vector<int> v){
    
//     for(auto i: v) {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }