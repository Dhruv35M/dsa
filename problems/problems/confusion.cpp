// Tom has confussion in 9 and 6, find the difference, if (56 --> 59) then 59-56=> 3

#include <iostream>
using namespace std;

int difference(int amount) {
    int reminder{amount};
    int newAmount{0};

    while(reminder > 0) {
        int digit = reminder%10;
        reminder = reminder/10;
        if(digit == 6) digit = 9;

        if(reminder > 0){
        newAmount = reminder * 10 + digit;
        }
    }

    return newAmount - amount;
}

int main() {
    int amount = 56;
    cout<<difference(amount);
    return 0;
}