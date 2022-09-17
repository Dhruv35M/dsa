#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    num & 1 ? cout<<"odd" : cout<<"even";

    return 0;
}