#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define print(x) cout << #x <<" ->  "<< x <<endl;

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);

    for(auto i: v) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"finding 9: "<<binary_search(v.begin(), v.end(), 9)<<endl;
    cout<<"finding 5: "<<binary_search(v.begin(), v.end(), 5)<<endl;
    
    cout<<"lower bound: "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    cout<<"upper bound: "<<upper_bound(v.begin(), v.end(), 6)-v.begin()<<endl;

    int a=3, b=5;
    print(a)
    print(b)

    print(max(a,b));

    swap(a,b);
    print(a)
    print(b)

    string name = "dhruv";
    print(name);
    reverse(name.begin(), name.end());
    print(name);

    for(auto i: v) {
        cout<<i<<" ";
    }
    cout<<endl;

    // rotate array by 1 or 2 whatever
    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"after rotate: "<<endl;
    
    for(auto i: v) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"after sort: "<<endl;
    sort(v.begin(), v.end());
    for(auto i: v) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}
