#include <iostream>
using namespace std;

int len(char name[]) {
    int count{0};
    for(int i{0}; name[i] !='\0'; i++) {
        count++;
    }
    return count;
}

void reverse(char name[], int n) {
    int s{0}, e=n-1;
    while(s<=e) {
        swap(name[s++], name[e--]);
    }
}

bool palindrome(char s[]) {
    int i=0, j = len(s) -1;
    while(i<=j) {
        if(s[i] != s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}

int main() {
    // char name[20];
    // cout<<"Enter your name: ";
    // cin>>name;
    // cout<<name<<" has "<<len(name)<<" characters!\n";
    // reverse(name, len(name));
    // cout<<name;

    // char s[20];
    // cout<<"Check palindrome"<<endl;
    // cout<<"Enter a string: ";
    // cin>>s;
    // cout<<palindrome(s);

    string s;
    cin>>s;
    cout<<s;
    
    return 0;
}