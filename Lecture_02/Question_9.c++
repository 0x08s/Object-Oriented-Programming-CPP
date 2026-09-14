#include<iostream>
using namespace std;

class Book {

public:

string title;
string author;
int price ;


Book (string t, string a, int p){

title = t;
author = a;
price = p;

}

Book(Book &obj){

title = obj.title;
author= obj.author;
price = obj.price;

}

void print(){

cout<<"Title :"<<title<<endl;
cout<<"author :"<<author<<endl;
cout<<"price :"<<price<<endl;


}


};


int main(){

Book s1("union","sawera",250);

Book s2 = s1;
s2.print();

return 0;    
}