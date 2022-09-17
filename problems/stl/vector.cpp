#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define print(x) cout << #x <<"-->  "<< x <<endl;

int main() {

    vector<int> v;
    print(v.size());

    v.push_back(34);
    print(v.capacity());

    v.push_back(3);
    print(v.capacity());

    // it double the size from 2 to 4 bytes
    v.push_back(90);
    print(v.capacity()); // size or capacity of array/vector

    print(v.size()); // size shows the number of elements

    print(v.at(2));
    print(v.front());
    print(v.back());


    cout<<"before pop: ";
    for(auto i:v) {
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();

    cout<<"after pop: ";
    for(auto i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before size: "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size: "<<v.size()<<endl;

    // clear() clear the size not capacity

    // ways to assign vector
    vector <int> arr = {12, 32, 54};
    
    // assign all elements with a value
    vector <int> arr2(5, 3);

    for(auto i:arr2) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    // copy all elements of a vector in new vector
    vector <int> last(arr2);
    for(auto i:arr2) {
        cout<<i<<" ";
    }
    cout<<endl;

    
    return 0;
}