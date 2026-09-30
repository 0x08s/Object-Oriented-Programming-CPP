#include <iostream>

using namespace std;

class vehicle{

public:

string name ;
int modle;

void start(){

cout<<"Information of Car!";

}

};

class car:public vehicle{

public:

void derive(){

name = "Prado";
modle = 2021;

cout<<"Car name :"<<name<<endl;
cout<<"Car Modle:"<<modle<<endl;

}

};


int main(){

car s1;
s1.start();
s1.derive();

return 0;    
}