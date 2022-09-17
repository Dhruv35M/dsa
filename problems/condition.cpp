#include <iostream>
using namespace std;

int main()
{
    int a, b;
    // a = cin.get();
    // cout<<a;

    // cout << "Enter the value of a: ";
    // cin >> a;

    // if (a > 0)
    // {
    //     cout << "a is possitive" << endl;
    // }
    // else if(a < 0) {
    //     cout << "a is negitive." << endl;
    // }
    // else {
    //     cout<<"a is 0"<<endl;
    // }
    
    char ch;
    cout<<"Enter alpha-numeric value: "<<endl;
    cin>>ch;
    if(ch >= 'a' && ch <= 'z')
        cout<<"lower case!"<<endl;
    else if(ch >= 'A' && ch <= 'Z')
        cout<<"upper case!"<<endl;
    else if(ch >= '0' && ch <= '9')
        cout<<"numeric!"<<endl;
    else cout<<"wrong choice!"<<endl;

    return 0;
}