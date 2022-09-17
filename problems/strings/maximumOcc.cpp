// maximum occurance character in string
#include <iostream>
#include <string>
using namespace std;

char maxOcc(string s) {
    int arr[26] {0};

    // count of characters
    for(int i{0}; i<s.length(); i++) {
        int number = 0;
        number = s[i] - 'a';
        arr[number]++;
    }

    // find the maximum occurance character
    int maxOcc{-1}, ans{-1};
    for(int i{0}; i<26; i++) {
        if(arr[i] > maxOcc) {
            ans = i;
            maxOcc = arr[i];
        } 
    }
    return 'a' + ans;
}

int main() {
    string s;
    cin>>s;
    cout<< maxOcc(s);
    return 0;
}