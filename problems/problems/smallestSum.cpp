// Smallest sum contiguous subarray

#include <bits/stdc++.h>
using namespace std;

int smallestSumSubarray(vector<int>& a){
    int sum {0}, ans {INT_MAX};
      for(int i{0}; i<a.size(); i++) {
          sum += a[i];
          if(a[i] < sum) {
              sum = a[i];
          }
          ans = min(ans, sum);
      }
      return ans;
}
int main() {
    vector<int> arr {3,-4, 2,-3,-1, 7,-5};
    cout<<smallestSumSubarray(arr);
    return 0;
}