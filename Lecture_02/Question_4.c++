#include<iostream>
using namespace std;

class Mobile{

public:

string brand ;

int model;

int price;

Mobile(string b, int m, int p){

brand = b;
model = m;
price = p;

}

void print(){

cout<<"Brand = "<<brand<<endl;
cout<<"modle = "<<model<<endl;
cout<<"Price = "<<price<<endl;

}

};

int main(){

Mobile m1("shezuki",2025,25000);

m1.print();

return 0;    
}
