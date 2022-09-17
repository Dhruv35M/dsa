#include <iostream>
#include <strings.h>
using namespace std;

int romanVal(char ch) {
    switch(ch) {
        case 'I': return 1;
            break;
        case 'V': return 5;
            break;
        case 'X': return 10;
            break;
        case 'L': return 50;
            break;
        case 'C': return 100;
            break;
        case 'D': return 500;
            break;
        case 'M': return 1000;
            break;
        default: return -1;
    }
}

int romanToInteger(string s) {
   int num{0};

        for(int i=0; i < s.size(); i++) {
            if(romanVal(s[i]) == -1) return -1;
            else if(romanVal(s[i]) > romanVal(s[i+1])) {
                num += romanVal(s[i]);
                num -= romanVal(s[i+1]);
                i++;
            }
            else {
                num += romanVal(s[i]);
            }
        }
    return num - 1;
}

int main() {

    string s;
    cin>>s;

    // int n = s.length();
    cout<<romanToInteger(s);

    return 0;
}