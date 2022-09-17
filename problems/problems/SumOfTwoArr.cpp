// sum of two array
// arr1 = [1, 2, 3, 4]
// arr2 = [6]
// ans[] = [1, 2, 4, 0]

#include <bits/stdc++.h>
using namespace std;

vector<int> sumOfArr(vector<int> arr1, vector<int> arr2) {
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;
    vector<int> ans;
    int carry {0};

    while(i>=0 && j>=0) {
        int sum = arr1[i] + arr2[j] + carry;
        carry = sum/10;
        int digit = sum%10;
        ans.push_back(digit);
        i--;
        j--;
    }

    // first case -> length of array1 is more than arr2
    while(i>=0) {
        int sum = arr1[i] + carry;
        carry = sum/10;
        int digit = sum%10;
        ans.push_back(digit);
        i--;
    }

    // second case -> length of array2 is more than arr1
    while(j>=0) {
        int sum = arr2[j] + carry;
        carry = sum/10;
        int digit = sum%10;
        ans.push_back(digit);
        j--;
    }

    // second case -> carry
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        int digit = sum%10;
        ans.push_back(digit);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

void print(vector<int> arr) {
    for(auto i: arr) {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {6};

    print(arr1);
    print(arr1);
    vector<int> sum = sumOfArr(arr1, arr2);
    print(sum);

    return 0;
}