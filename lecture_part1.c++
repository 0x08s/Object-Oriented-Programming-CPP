#include<iostream>
using namespace std;

class student{

private:

string name;
string roll_number;
int Marks;

public:

void info(string n){

name = n;

}

void roll(string r){

roll_number = r;

}

void num(int m){

Marks = m;

}

string getname(){

    return name;

}

string getroll(){

    return roll_number;

}

int getma(){

    return Marks;

}

};

int main(){

student a;

 a.info("Sawera");
a.roll("Bc250438279");
a.num(80);

cout<<a.getname()<<endl;
cout<<a.getroll()<<endl;
cout<<a.getma()<<endl;

return 0;    
}