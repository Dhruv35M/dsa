// static and dynamic object
#include <iostream>
using namespace std;
#define print(x) cout<< #x <<": "<< x <<endl;

class Hero {
    int health;

    public:
    char level;
    
    void setHealth(int h) {
        health = h;
    }

    int getHealth() {
        return health;
    }
};

int main() {

    // Hero piyush;

    // print(sizeof piyush);

    // piyush.setHealth(80);
    // piyush.setLevel('A');

    // print(piyush.getHealth());
    // print(piyush.getLevel());



    // static allocation
    Hero dhruv;

    dhruv.level = 'A';
    dhruv.setHealth(80);

    print(dhruv.level);
    print(dhruv.getHealth());


    // dynamic allocation
    Hero *rohit = new Hero;
    // print((*rohit).level);
    // print((*rohit).getHealth());


    rohit->level = 'B';
    rohit->setHealth(30);

    print(rohit->level);
    print(rohit->getHealth());

    return 0;
}