#include<iostream>

using namespace std;

class person {

public:
string name ;
int age;

void introduce(){

cout<<"My introduction!"<<endl;

}

};

class student :public person{

public:

void study(){

name = "sawera";
age = 17;

cout<<"My name is :"<<name <<endl;
cout<<"My age is :"<<age <<endl;

}

};


int main(){

student s1;
s1.introduce();
s1.study();

return 0;    
}