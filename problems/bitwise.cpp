#include <iostream>
using namespace std;

int main() {

    int a = 4, b= 6;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    cout<<"a&b: " << (a&b)<<endl;
    cout<<"a|b: " << (a|b)<<endl;
    cout<<"a^b: " << (a^b)<<endl;
    cout<<"~a: " << (~a)<<endl;

    // right shift >> (not in every case but basically devide by 2)
    cout<<(12>>1)<<endl; // 12 / 2
    cout<<(17>>2)<<endl; // (17 / 2)/2

    // left shift << (not in every case but basically multiply by 2)
    cout<<(12<<1)<<endl; //12 x 2
    cout<<(17<<2)<<endl; // 17 x 2 x 2


cout<<"*******************"<<endl;
    int x, y=1;
    x = 10;
    if(++x) {
        cout<<y<<endl;
    }
    else cout<< ++y;

    return 0;
}