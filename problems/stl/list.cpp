#include <iostream>
#include <list>
using namespace std;

#define print(x) cout << #x <<" ->  "<< x <<endl;

int main() {
    
    list<int> l;


    l.push_back(5);
    l.push_back(4);
    l.push_back(3);
    l.push_back(2);
    l.push_front(1);

    for(auto i: l) {
        cout<<i<<" ";
    }
    cout<<endl;


    l.erase(l.begin());
     for(auto i: l) {
        cout<<i<<" ";
    }
    cout<<endl;

    print(l.size());
    
    list<int> n(5, 300);

    n.erase(n.begin());
     for(auto i: n) {
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}

