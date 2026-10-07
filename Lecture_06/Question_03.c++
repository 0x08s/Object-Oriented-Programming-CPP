#include<iostream>

using namespace std;

class Employee{

public:
string name;
int age;
int salery;

Employee(string name,int age,int salery){

this->name = name;
this->age = age;
this->salery = salery;

cout<<"Name :"<<name<<endl;
cout<<"Age :"<<age<<endl;
cout<<"Salery :"<<salery<<endl;

}

};


int main(){

Employee s1("sawera",18,50000);


return 0;    
}