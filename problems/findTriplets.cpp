#include <bits/stdc++.h>
using namespace std;

    bool findTriplets(int arr[], int n)
    { 
        sort(arr, arr+n);

        for(int i=0; i<n-3; i++) {
            int j={i+1}, k={j+1};
            while(j<n-1) {
                if(k == n-1) {
                    j++;
                    k = j+1;
                }
                if(arr[i] + arr[j] + arr[k] == 0) return true;
                
                k++;
            }
        }

        return false;
    }

    
int main() {
    int arr[] = {0, -1, 2, -3, 17};

    cout<<findTriplets(arr, 5);
    return 0;
}

