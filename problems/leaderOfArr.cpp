#include <bits/stdc++.h>
using namespace std;

vector<int> leadersOfArr(vector<int> arr) {
    int sum = 0, size = arr.size() - 1;
    vector<int> v;
    sum = arr[size];

    for(int i{size}; i>=0; i--) {
        if(arr[i] >= sum) {
            v.push_back(arr[i]);
        }
        sum += arr[i];
    }
    return v;
}

int main() {
    vector<int> arr = {63, 70, 80, 33, 33, 47, 20};
    
    for(auto i: arr) {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> v = leadersOfArr(arr);
    reverse(v.begin(), v.end());
    for(auto i: v) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

