#include<iostream>
using namespace std;

class Student{

public:

string name ;
int roll_number ;
int marks ;

Student(string n, int r, int m){

name = n;
roll_number = r;
marks = m;

}

Student(Student &obj){

name = obj.name;
roll_number = obj.roll_number;
marks = obj.marks;


}

void display(){

cout<<"Name :"<<name<<endl;

cout<<"roll_number :"<<roll_number<<endl;

cout<<"marks :"<<marks<<endl;

}

};

int main(){

Student s1("Sawera",123,85);

Student s2 = s1;

cout<<"original object :"<<endl;
s1.display();

cout<<endl;

cout<<"copied object :"<<endl;
s2.display();


return 0;    
}
