#include<iostream>

using namespace std;

class verical{

protected:

int speed;
string name ;

};

class car:protected verical{

private:

void run(){

speed = 123;
name ="Prado";

cout<<"Car speed is :"<<speed<<endl;
cout<<"Car name is :"<<name<<endl;

}

public:

void start(){

run();

}

};


int main(){

car s1;

s1.start();

return 0;    
}