#include<iostream>
using namespace std;

class car{

public:

string brand;
int model;

car(string a , int b){

this->brand = a;
this->model = b;

cout<<"My car brand is :"<<a<<endl;
cout<<"My car Model is :"<<b<<endl;

}
};

class social : public car{

public:

social(string c , int d):car(c,d){

c = brand;
d = model;

}
};

int main(){

social s1("Parado",2024);

return 0;    
}