#include <iostream>
using namespace std;

class student{

private:

string name;
int marks; 
int roll_number;

public:

void setdata(){

cout<<"Enter your name :";
cin>>name;

cout<<"Enter your marks :";
cin>>marks;

cout<<"Enter your roll_number :";
cin>>roll_number ;

};

void showdata(){

    cout<<"name:"<<name<<endl;
    cout<<"marks :"<<marks<<endl;
    cout<<"roll_number :"<<roll_number<<endl;


};


};

int main(){

student s[3];

for(int i = 0; i<3 ;i++){

s[i].setdata();

}

for(int i = 0; i<3 ;i++){

s[i].showdata();

}


return 0;    
}