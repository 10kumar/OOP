/*
Create a class which stores account number, customer name and balance. Derive two classes from ‘Account’ class: ‘Savings’ and ‘Current’.
The ‘Savings’ class store minimum balance. The ‘Current’ class stores the over-due amount. 
Include member functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.]
[For current account overdue amount should be calculated.]
-display balance
Display data from each class using virtual function. 
*/
#include<iostream>
using namespace std;

class account{
    protected:
        long long int acc_no;
        char name[10];
        float balance;
    public:
        virtual void deposit()=0;
        virtual void withdraw()=0;
        virtual void display()=0;
};

class savings:public account{
    float min_bal;
    public:
        savings(){
            cout<<"Enter the account number , name and minimum balance of the savings account respectively:"<<endl;
            cin>>acc_no>>name>>min_bal;
        }
        void deposit(){
            float d_amount;
            cout<<"Enter the amount to be deposited:"<<endl;
            cin>>d_amount;
            balance=min_bal+d_amount;
        }
        void withdraw(){
            float w_amount;
            cout<<"Enter the amount to be withdrawn:"<<endl;
            cin>>w_amount;
            if(balance>=w_amount){
                balance=balance-w_amount;
            }
            else{
                cout<<"Insufficient balance"<<endl;
            }
        }
        void display(){
            cout<<"\nType           : SAVINGS\nAccount number : "<<acc_no<<"\nName           : "<<name<<"\nBalance        : "<<balance;
        }
};

class current:public account{
    float over_due;
    public:
        current(){
            cout<<"\n\nEnter the account number , name and over-due amount of the current account respectively:"<<endl;
            cin>>acc_no>>name>>over_due;
        }
        void deposit(){
            float d_amount;
            cout<<"Enter the amount to be deposited:"<<endl;
            cin>>d_amount;
            balance=over_due+d_amount;
        }
        void withdraw(){
            float w_amount;
            cout<<"Enter the amount to be withdrawn:"<<endl;
            cin>>w_amount;
            if(balance>=w_amount){
                balance=balance-w_amount;
            }
            else{
                cout<<"Insufficient balance"<<endl;
            }
        }
        void display(){
            cout<<"\nType           : CURRENT\nAccount number : "<<acc_no<<"\nName           : "<<name<<"\nBalance        : "<<balance;
        }
};

int main(){
    account* s1(new savings);
    s1->deposit();
    s1->withdraw();
    s1->display();
    account* c1(new current);
    c1->deposit();
    c1->withdraw();
    c1->display();
    return 0;
}