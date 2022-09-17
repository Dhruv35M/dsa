#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

#define print(x) cout << #x <<" "<< x <<endl;

int main() {
    array <int, 4> arr {1, 3, 5, 3};

    print(arr.size());
    print(arr.at(0));
    print(arr[3]);
    
    for(int i{0}; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // sort array
    sort(arr.begin(), arr.end());

    for(auto i: arr) {
        cout<<i<< " ";
    }
    cout<<endl;

    // Filling arr with 10
    arr.fill(10);

    for(auto i: arr) {
        cout<<i<< " ";
    }
    cout<<endl;

// ranged for loop is supported
  cout << "\narr : ";
  for (auto &s : arr)
    cout << s << ' ';

    return 0;
}