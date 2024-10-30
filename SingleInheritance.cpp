#include<iostream>
using namespace std;

class Account {
     string bankname;
     int balance,account_no;

     public:

     Account(string bankname,int balance,int account_no) {
         this->bankname = bankname;
         this->balance = balance;
         this->account_no = account_no;
     }

     void display_BankDetails() {
         cout<<"name: "<<bankname<<endl;
         cout<<"Balance: "<<balance<<endl;
         cout<<"account_no: "<<account_no<<endl;
     }
};

class OwnerInfo: public Account {
    string name;
    int age;

    public:
    OwnerInfo(string bankname, int balance, int account_no, string name, int age): Account(bankname, balance, account_no) {
         this->name = name;
         this->age = age;
    }

    void display_FullInfo() {
         display_BankDetails();
         cout<<"Owner Name: "<<name<<endl;
         cout<<"Age is: "<<age<<endl;
    }
};


int main() {

    OwnerInfo myAccount("kotak",10000,12345,"kapil",22);

    myAccount.display_FullInfo();

     
}