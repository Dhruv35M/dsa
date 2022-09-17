#include <iostream>
#include <set>
using namespace std;

#define print(x) cout << #x <<" ->  "<< x <<endl;

// collection of unique elements
// no modification only insertion and deletion
// elements will be returned in sorted order
// unordered set -> unsored and faster than set
// unordered set -> return random elements

int main() {
    set <int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(34);
    s.insert(3);
    s.insert(4);
    s.insert(8);
    s.insert(89);

    for(auto i: s) {
        cout<<i<<" ";
    }
    cout<<endl;

    // s.erase(s.begin());

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    
    for(auto i: s) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"element is present or not: "<<endl;
    print(s.count(5));
    print(s.count(-5));

    // find element
    set<int>::iterator itr = s.find(8);
    
    for(auto it=itr; it!=s.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}