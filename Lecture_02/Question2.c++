#include<iostream>
using namespace std;

class Car{

public:

string brand;

int modle;

Car( string b, int m){

brand = b;
modle = m;


}

void display(){

cout<<"Brand :"<<brand<<endl;
cout<<"Modle :"<<modle<<endl;

}

};

int main(){

Car c1("shezuki",2020);

c1.display();

return 0;    
}