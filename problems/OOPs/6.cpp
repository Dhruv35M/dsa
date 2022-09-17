// constructor -> special function called automatically when object is created. that type of constructor is called default constructor.

// 1) default constructor
// 2) parameterised constructor
// 3) copy constructor

#include <iostream>
using namespace std;
#define print(x) cout<< #x <<": "<< x <<endl;

class Hero {
    int health;

    public:
    char level;
    
    // after making this constructor inbuilt constructor replace with this
    // default constructor
    Hero() {
        cout<<"Constructor Called" <<endl;
    }

    // parameterised constructor
    Hero(int health) {
        print(this);
        (*this).health = health;
        // this->health = health;
    }

    Hero(int health, char level) {
        print(this);
        (*this).health = health;
        this->level = level;
    }

    // copy constructor
    Hero(Hero& temp) {
        cout<<"mera wala copy constructor"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void setHealth(int h) {
        health = h;
    }

    int getHealth() {
        return health;
    }

};

 
int main() {

    cout<<"Static allocation"<<endl<<endl;
    Hero dhruv(50);

    dhruv.level = 'A';
    // dhruv.setHealth(80);
    print(&dhruv);
    print(dhruv.level);
    print(dhruv.getHealth());

    cout<<"\nDynamic allocation"<<endl<<endl;
    Hero *superman = new Hero(90, 'A');
    print(&superman);
    print(superman->level);
    print(superman->getHealth());

    // Hero spiderman;  // it will trough error because (if we remove default constructor) our default contructor dies and we have only permeterised contructor

    // copy construcor
    Hero papa(100, 'A');

    // method 1
    // Hero mammi;
    // mammi.level = papa.level;
    // mammi.setHealth(papa.getHealth());

    // method 2
    // Hero mammi = papa;

    // method 3
    Hero mammi(papa); // copying form papa

    print(mammi.level);
    print(mammi.getHealth());


    return 0;
}