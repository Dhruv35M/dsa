#include <iostream>
#include <map>
using namespace std;

#define print(x) cout << #x <<" ->  "<< x <<endl;

// key value pair
// all keys are unique and only can point to one value
// map contains unique keys
// map is sorted and returns sorted elements of map
// unorderd_map is unsorted and returns random elements

int main() {
    map<int, string> m;
    m[1] = "dhruv";
    m[4] = "mishra";
    m[2] = "mishra";
    m[3] = "piyush";

    m.insert({5, "bheem"});

    for(auto i: m) {
        cout<<i.first <<" : "<<i.second<<endl;
    }
    cout<<endl;

    m.erase(5);
    m.erase(1);

    // after erase 
    for(auto i: m) {
        cout<<i.first <<" : "<<i.second<<endl;
    }
    cout<<endl;

    // is present or not
    print(m.count(5));
    print(m.count(-5));
    print(m.count(3));
   
   auto it = m.find(3);
   for(auto i=it; i!=m.end(); i++) {
    cout<<(*i).first<<endl;
   }
    cout<<endl;
    return 0;
}
