#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // find sum of all even numbers

    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;

    // int sum;
    // for(int i=0; i<n; i=i+2) {
    //     sum = sum + i;
    // }

    // cout<<"Sum of even numbers: "<<sum;



    // fahrenheit to celsius
    // int fahrenheit;
    // cout<<"enter temprature in fahrenheit: ";
    // cin>>fahrenheit;
    // float calc = (fahrenheit - 32) /1.8;

    // cout<<fixed<<setprecision(2)<<calc;

    // for(; ;){ // infinite loop because no condition to stop
    //     cout<<"Namaste Duniya!"<<endl;
    // }
    // int i=1;
    // for(;;){
    //     if(i<=10) {
    //         cout<<i<<endl;
    //         i++;
    //     }
    //     else break;
    // }

    // for(int a = 1, b=2, c=10; a > 0 && c>=0; c--, a++) {
    //     cout<<a<<" "<<b<< " "<<c <<endl;
    // }

    // sum of n no's
    int n=0;
    cin>>n;
    // int sum=0;
    // basic approach -> O(n)
    // for(int i=0; i<=n; ++i) {
    //     sum += i;
    // }

// better approach -> O(1)
    // sum = n*(n+1)/2;

    // cout<<"Sum = "<<sum;
    
    // int a =0, b=1;
    // int fib=0;

    // cout<<a<<" "<<b<<" ";
    //  for(int i=0; i<n; ++i) {
    //     int nextFib = a+b;
    //     cout<<nextFib<<" ";
        
    //     // fib = fib + a + b;

    //     a = b;
    //     b = nextFib;
    // }

    // cout<<"fabonacci: "<<fib;
    

    // Prime number or Not
// bool isPrime = 1;
// for(int i=2; i<n; i++) {
//     if(n%i == 0) {
//         isPrime = 0;
//         break;
//     }
// }
//     isPrime==1 ? cout<<"It is a prime number\n" : cout<<"Not a prime number.\n";

//sum and product of digits in n
int sum=0, product=1;
while(n > 0){
int digit = n % 10;
sum += digit;
product *= digit;
n = n/10;
}

int differnce = product - sum;

cout<<"Sum = "<<sum<<endl;
cout<<"Produnct = "<<product<<endl;
cout<<"difference: "<<differnce;
    return 0;
}