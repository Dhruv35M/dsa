// remove the last element of the number until it's a prime number

#include <iostream>
using namespace std;

bool findPrime(int n) {
    int i = 2;
    bool isPrime = true;
    while(i < n) {
        if(n % i == 0){
            isPrime = false;
        }
        i++;
    }
    return isPrime;
}

int main() {
    int n;
    cin>>n;

    // checking is prime or not
    while(findPrime(n)) {
        int lastDigit = n % 10;
        n = n / 10;
    }

    cout<<"n: "<<n;

    return 0;
}