// Minimum distance between two numbers

#include <iostream>
using namespace std;

int minDist(int a[], int n, int x, int y) {
        int s{-1}, e{-1};
        int diff{INT_MAX};

        for(int i{0}; i<n; i++) {
            if(a[i] == x) s = i;
            if(a[i] == y) e = i;

            if(s != -1 && e != -1) {
            if( diff > abs(e-s)) diff = abs(e-s);
            }
        }
        if(a[s] != x || a[e] != y) return -1;
        return diff;
    }

int main() {
    int arr[] = {4, 1, 2, 3, 1, 2, 9, 3, 1, 4, 2};
    cout<<minDist(arr, 11, 3, 4);
    return 0;
}


// #include <iostream>
// using namespace std;

// int minDist(int a[], int n, int x, int y) {
//         int s{-1}, e{-1};
//         for(int i{0}; i<n; i++) {
//             if(a[i] == x) s = i;
//         }
//         cout<<s<<endl;
//         if(s != -1){
//         for(int j{s}; a[j] <= y; j++) {
//             if(a[j] == y) e = j;
//         }
//         cout<<e<<endl;
//         return e-s;
//         }
//         return -1;
//     }

// int main() {
//     int arr[] = {1, 2, 3, 2};
//     cout<<minDist(arr, 4, 1, 2);
//     return 0;
// }