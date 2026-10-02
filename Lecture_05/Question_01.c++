#include<iostream>

using namespace std;

class student{

public:

string name;
int age;

student(string n,int a){

name = "sawera";
age = 17;

cout<<"Name :"<<name<<endl;
cout<<"Age :"<<age<<endl;

}

~student(){

cout<<"remove 0"<<endl;    

}

};

class chid:public student{

 public:

chid(string n,int a):student(n,a){

    name = "Tomy";
    age = 17;
    cout<<"Name 1:"<<name<<endl;
    cout<<"age 1 :"<<age<<endl;


}

~chid(){

cout<<"Clear all"<<endl;

}


};

int main(){

chid s1("1",1);


return 0;    
}