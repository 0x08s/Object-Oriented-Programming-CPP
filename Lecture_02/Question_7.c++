#include<iostream>
using namespace std;

class Student{

public:

string name;
int roll_number;
int marks ;

Student(string name,int roll_number,int marks){

this->name = name;
this->roll_number = roll_number;
this->marks = marks;

}

void print(){

cout<<"Name :"<<name<<endl;
cout<<"roll_number :"<<roll_number<<endl;
cout<<"marks :"<<marks<<endl;

}

};

int main(){

Student s1("sawera",234,70);
s1.print();


return 0;    
}