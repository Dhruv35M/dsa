#include <iostream>
using namespace std;

int main() {
    cout<<"\n\t\t Welcome to the Decimal to binary converter \t\t\n";
    int n, remain, i=0;
    cin>>n;

    // getting the remainders
    while(n != 0) {
        int bit = n % 2;
        remain = remain * 10 + bit;
        n = n / 2;
        i++;
    }
    // cout<<remain<<" i: "<<i<<endl;

    // reversing the remainders
    int binary=0;
    while (i != 0)
    {
    int digit = remain % 10;
    binary =  binary * 10 + digit;
    remain = remain / 10;
    i--;
    }

    cout<<"Binary: "<<binary;
    
    return 0;
}