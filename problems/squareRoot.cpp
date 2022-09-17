// find square root using binarySearch
// square root of 27 => means lies between range 1,2,3,4.........25,26,27
// this range is sorted so I can easily use binary search 

#include <iostream>
using namespace std;

int squareRoot(int);

int main() {
    
    int n = 23;
    squareRoot(n);

    return 0;
}

int squareRoot(int n) {
    cout<<"n: "<<n;
    int s=1, e= n/2 - 1;
    int mid = s + (n-s-1)/2;
    cout<<"e and n: "<<e<<n<<endl;
    while(s<=e) {
        cout<<"mid: and n "<<mid<<n<<endl;
        if((mid-1)*(mid-1) <= n <= (mid+1)*(mid+1)){
            cout<<"first: "<<mid<<endl;
            return mid;
        }
        else if(mid*mid >= e) {
            cout<<"second: "<<mid<<endl;
            e = mid;
        }
        else {
            cout<<"third: "<<mid<<endl;
            s = mid + 1;
        }
       mid = s+(e-s)/2;
    }
    return mid;
}



