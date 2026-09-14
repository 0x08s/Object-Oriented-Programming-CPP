#include<iostream>
using namespace std;

class Employee{
public:
    string name;
    int salary;

    Employee(string n, int s){
        name = n;
        salary = s;
    }

    void print(){
        cout << "Name :" << name << endl;
        cout << "Salary :" << salary << endl;
    }
};

int main(){
    Employee e1("sawera", 50000);
    e1.print();

    return 0;
}