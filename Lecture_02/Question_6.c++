#include<iostream>
using namespace std;

class Rectangle{

public:

int length;
int width;
int Area;

Rectangle(){

length = 10;
width = 5;

Area = length * width;

}

Rectangle(int l , int w){

length = l;
width = w;

Area = length * width;

}

void print(){

cout<<"Area :"<<Area<<endl;

}

};

int main(){

Rectangle s1(20,5);
s1.print();

return 0;    
}