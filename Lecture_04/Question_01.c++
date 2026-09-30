#include<iostream>

using namespace std;

class Animal{

public:

string name ;
int age;

};

class Dog :public Animal{

public:

void bark(){

name = "KFG";
age = 19;

cout<<"Dog name :"<<name;

cout<<"Dog age :"<<age;

}

};



int main(){

Dog s1;
s1.bark();

return 0;    
}