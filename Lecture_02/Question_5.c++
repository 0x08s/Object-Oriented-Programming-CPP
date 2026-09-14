#include<iostream>
using namespace std;

class BankAccount{

public:

string account_Holder;
int account_Number;
int balance;

BankAccount(string h, int n, int b){

account_Holder = h;

account_Number = n;

balance = b;

}

void print(){

    cout<<"account_Holder :"<<account_Holder<<endl;
    cout<<"account_Number:"<<account_Number<<endl;
    cout<<"balance :"<<balance<<endl;

}

};

int main(){

BankAccount b1("Alflah",03,23000);
b1.print();


return 0;    
}