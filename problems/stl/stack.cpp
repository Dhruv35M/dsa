#include <iostream>
#include <stack>
using namespace std;

#define print(x) cout << #x <<" ->  "<< x <<endl;

// last in first out

int main() {
    stack<int> s;

    s.push(34);
    s.push(3);
    s.push(4);
    s.push(14);

    print(s.top());
    print(s.size());
    s.pop();
    print(s.empty());

    cout<<endl;
    return 0;

}