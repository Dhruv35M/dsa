#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 1 || n == 0) return 1;
    
    int fact=1, i=2;
    while(i <= n) {
        fact = fact * i;
        i++;
    }
    return fact;
}

int nCr(int n, int r) {
    int ncr = factorial(n)/(factorial(r) * factorial(n-r));
    return ncr; 
}

int main() {
    int n, r;
    cout<<"Enter n and r: ";
    cin>>n>>r;

    cout<<nCr(n, r);
    return 0;
}