#include<iostream>

using namespace std;

class Animal {

protected:

int age ;


};

class Dog:protected Animal{
    
public:

void show(){

age = 19;

cout<<"Dog age is "<<age;

}

};


int main(){

    Dog s1;
    s1.show();


return 0;    
}