#include<iostream>
using namespace std;

//Base class 1
class Account {
    string bankname;
    int balance, account_no;

    public:
    Account(string bankname, int balance, int account_no) {
         this->bankname = bankname;
         this->balance = balance;
         this->account_no = account_no;
    }

    void bankInfo() {
         cout<<"Bankname: "<<bankname;
         cout<<"Balance: "<<balance<<endl;
         cout<<"account_no: "<<account_no<<endl;
    }
};

//Base class 2
class OwnerInfo {
     string name;
     int age;

     public:
     OwnerInfo(string name, int age) {
         this->name = name;
         this->age = age;
     }

     void Owner_Info() {
         cout<<"Owner Name: "<<name<<endl;
         cout<<"Age is: "<<age<<endl;
     }
};

//Derived class using MULTIPLE INHERITANCE
class BankAccount: public Account, public OwnerInfo {
     public:
     BankAccount(string bankname,int balance,int account_no,string name,int age):Account(bankname,balance,account_no),OwnerInfo(name,age)
     {

     }
     void Display_FullBankDetails() {
         bankInfo();
         Owner_Info();
     }
};


int main() {
     BankAccount myAccount("kotak",10000,12345,"kapil",22);

     myAccount.Display_FullBankDetails();
}