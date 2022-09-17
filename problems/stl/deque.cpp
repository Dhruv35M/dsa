#include <iostream>
#include <deque>
using namespace std;
#define print(x) cout << #x <<" ->  "<< x <<endl;

int main() {

    deque<int> d;
    d.push_back(1);
    d.push_back(10);
    d.push_back(21);
    d.push_front(34);

    for(auto i: d) {
        cout<<i<<" ";
    }
    cout<<endl;

    print(d.at(0));  
    print(d.front());  
    print(d.back());  
    print(d.empty());  
    print(d.size());  

   // before deletion 
   for(auto i: d) {
        cout<<i<<" ";
    }
    cout<<endl;

    // deletion in deque
    d.erase(d.begin(), d.begin()+1); // range

   for(auto i: d) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<d.size()<<endl;
    cout<<d.max_size()<<endl; // maximum number of elements that a deque container can hold

    return 0;
}