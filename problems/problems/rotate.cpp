#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>);
void rotate(vector<int>&, int);

int main() {
    vector<int> v = {12, 32, 5, 23, 1};
    int k=3;

    print(v);
    rotate(v, k);
    print(v);

    return 0;
}

void print(vector<int> v) {
    for(auto i: v) {
        cout<<i<<" ";
    }
    cout<<endl;
}

void rotate(vector<int>& v, int k) {
    vector<int> temp(v.size());

    for(int i{0}; i<v.size(); i++) {
        temp[(i+k)%v.size()] = v[i];
    }
    v = temp;
}


// #include <bits/stdc++.h>
// using namespace std;

// void print(vector<int> arr) {
//     for(auto i: arr) {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// void rotate(vector<int>& arr, int key) {
//     int n = arr.size();
//     vector<int> temp(n);
//     int i{0};
//     while(i<n) {
//         temp.at((i+key) % n) = arr.at(i);
//         i++;
//     }
//     arr = temp;
// }


// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     print(arr);
//     int key{0};
//     cout<<"Enter the key to rotate: ";
//     cin>>key;
//     rotate(arr, key);
//     print(arr);
//     return 0;
// }