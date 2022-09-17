#include <iostream>
#include <queue>
using namespace std;

#define print(x) cout << #x <<" ->  "<< x <<endl;

// first in first out

int main() {
   queue <string> q;

   q.push("dhruv");
   q.push("piyush");
   q.push("papa");
   q.push("mammi");

   print(q.front());
   print(q.back());
   print(q.size());
   cout<<"after pop: "<<endl;
   q.pop();
   print(q.front());
   
    return 0;

}