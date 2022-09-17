#include <iostream>
using namespace std;

class Hero {
  //properties

  // by default all properties and methods are private
  private:
  int health;  

  public:
  char level;


// getter and setter
  int getHeath() {
    return health;
  }

  void setHealth(int h) {
    health = h;
  }

};

int main() {

    Hero ramesh;
    cout<<"size of Hero: "<<sizeof ramesh<<endl;

    // ramesh.health = 80;
    ramesh.level = 'A';
    ramesh.setHealth(70);

// because it's a private member can't be accessed from outside

    // cout<<"health: "<<ramesh.health<<endl;

    cout<<"health: "<<ramesh.getHeath()<<endl;
    cout<<"level: "<<ramesh.level<<endl;
    return 0;
}

// what is padding?
// what is greedy alignment
 