#include<iostream>

using namespace std;

class student{

public:

string name;
int age;

student(string name,int age){

this->name = name;
this->age = age;

cout<<"My name is:"<<name<<endl;
cout<<"My age is :"<<age<<endl;

}

};

class frien:public student{

public:

frien(string a, int b) : student(a, b) {

a = name;
b = age;

}

};

int main(){

frien s1("sawera",18);


return 0;    
}