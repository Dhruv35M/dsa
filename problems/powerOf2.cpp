// power of two

#include <iostream>
#include <math.h>

using namespace std;

// bool isPowerOf2(int n) {
//     int i=0;
//    while(n >= pow(2, i) && i <= 31) {
//         if(n == pow(2, i)){
//             return true;
//         }
//         i++;
//     }
//     return false;
// }


// optimised
bool isPowerOf2(int n) {
    int i=0, ans;
    while(i <= 30){
        if(ans == n) {
            return true;
        }
        if(ans < INT_MAX/2) {
            ans = ans * 2;
        }
        i++;
    }
    return false;
}


int main() {
   int n;
   cin>>n;
    cout<<isPowerOf2(n);
    return 0;
}