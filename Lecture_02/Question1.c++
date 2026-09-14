#include<iostream>
using namespace std;

class Student{

public:    

string name ;

int roll_number ;

Student(string n, int r){

name = n;
roll_number = r;


}

void display(){

cout<<name<<endl;
cout<<roll_number<<endl;


}


};

int main(){

Student s1("sawera",123);
s1.display();


return 0;    
}

