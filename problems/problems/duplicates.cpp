// Find duplicates in an array
#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(int arr[], int n) {
    vector<int> ans;
    int res {0};

    int s {0}, e= n-1;
    while(s<e) {
        if(arr[s]^arr[e] == 0)
            ans.push_back(arr[e]);
            s++;
            e--;
    }

    return ans;
}

int main() {
    int arr[] = {2, 3, 1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> duplicates;
    duplicates = findDuplicates(arr, n);

    for(auto i: duplicates) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}