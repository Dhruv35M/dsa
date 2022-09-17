#include <iostream>
#include <queue>
using namespace std;

#define print(x) cout << #x <<" ->  "<< x <<endl;

int main() {

    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    maxi.push(5);

    // print(maxi.top());
    print(maxi.size());
    int n = maxi.size();

    for(auto i{0}; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    // print(maxi.top());
    // maxi.push(43);
    // print(maxi.top());

cout<<"mini: "<<endl;

    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
    mini.push(5);

    // print(mini.top());
    print(mini.size());
    n = mini.size();

    for(auto i{0}; i<n; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    print(mini.empty());
    return 0;
}