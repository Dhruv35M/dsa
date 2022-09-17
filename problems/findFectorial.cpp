#include <iostream>
using namespace std;

int main() {
    int n, fact{1};
    cout<<"Enter N: ";
    cin>>n;

    for(int i=n; i>0; i--) {
        fact = fact * i;
    } 
    cout<<"factorial: "<<fact;
    return 0;
}