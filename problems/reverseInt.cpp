// reverse an Ineger value 243 -> 342

#include <iostream>
using namespace std;

int reverseInt(int n) {
    int ans=0;

    while(n > 0) {
    int digit = n % 10;
    n = n / 10;

    if(ans > INT_MAX/10 || ans < INT_MIN/10){
        return -1;
    }
    
    ans = ans * 10 + digit; 
    }
    return ans;
}

int main() {
    int n;
    cin>>n;

    cout<<reverseInt(n);
    return 0;
}