// consider alphabets and numbers only ignores symbols
#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch) {
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) return ch;
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isValidChar(char ch) {
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) return true;
    return false;
}

bool checkPlindrome(string str, int n) {
    string temp = "";

    // faltu ke characters hatado
    for(int i{0}; i<str.length(); i++) {
        if(isValidChar(str[i])) {
            temp.push_back(str[i]);
        }
    }

    // bache huye valid characters ko check karo 
    int s{0}, e = temp.size()-1;
    while(s<=e) {
        if(toLowerCase(temp[s]) == toLowerCase(temp[e])){
            s++;
            e--;
        }
        else return false;
    }
    return true;
}

int main() {
    string s;
    cin>>s;

    int n {0};
    for(int i{0}; s[i] != '\0'; i++) n++;

    cout<< checkPlindrome(s, n);
}