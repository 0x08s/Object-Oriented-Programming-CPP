#include <iostream>
using namespace std;

class Animal {

public:

    void animalFunction() {
        cout << "Animal function" << endl;
    }
};

class Dog : public Animal {

public:

    void dogFunction() {
        cout << "Dog function" << endl;
    }
};

class Cat : public Animal {

public:

    void catFunction() {
        cout << "Cat function" << endl;
    }
};

class Robot : public Dog, public Cat {

public:

    void robotFunction() {
        cout << "Robot function" << endl;
    }
};

int main() {

    Robot r1;

    // Animal ki calling
    r1.Dog::animalFunction();
    r1.Cat::animalFunction();

    // Dog ki calling
    r1.dogFunction();

    // Cat ki calling
    r1.catFunction();

    // Robot ki calling
    r1.robotFunction();

    return 0;
}