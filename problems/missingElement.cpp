// find the missing element in the array

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> & arr) {
    for(int i{0}; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> plusOne(vector<int>& digits) {
    int result = 0;
    vector<int> afterPlus;

    for (int i = 0; i < digits.size(); i++) {
        result= result*10 + digits[i];
    }

    int remaining = result + 1;
    
    int newDigit = 0;
        while(remaining > 0)
        {
            newDigit = newDigit * 10 + remaining % 10;
            remaining = remaining / 10;
        }


    for(int i{0}; newDigit > 0; i++) {
        int digit = newDigit % 10;
        afterPlus.push_back(digit);
        newDigit = newDigit / 10;
    }

    return afterPlus;
    }

int main() {

    // vector<int> arr {1,2};
    vector<int> arr {1,2,3};
    print(arr);
    vector<int> res = plusOne(arr);
    print(res);
    return 0;
}