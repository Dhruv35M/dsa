#include <iostream>
using namespace std;

// size of object is the size of properties of class
// empty class object's size is 1 Byte

class Hero {
  //properties
  int health;  
};

int main() {

    Hero ramesh;
    cout<<"size of Hero: "<<sizeof ramesh<<endl;

    return 0;
}