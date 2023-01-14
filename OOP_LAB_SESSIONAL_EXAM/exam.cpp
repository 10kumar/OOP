#include<iostream>
using namespace std;

class bank_account{
    long long int account;
    char name[10];
    float balance;
    public:
    bank_account(){
        cout<<"\nEnter the name:";
        cin>>name;
        cout<<"\nEnter the account number:";
        cin>>account;
        balance=100;
    }
    friend void deposit(bank_account obj[], int size,int x,float y){
        int i;
        for(i=0;i<size;i++){
            if(x==obj[i].account){
                obj[i].balance=obj[i].balance+y;
                break;
            }
            // else{
            //     cout<<"\nAccount is not found.";
            // }
        }
        if(i==5){
            cout<<"\nAccount is not found.";
        }
    }
    friend void withdraw(bank_account obj[], int size,int x,float y){
        for(int i=0;i<size;i++){
            if(x==obj[i].account){
                if(obj[i].balance>=y){
                    obj[i].balance=obj[i].balance-y;
                    break;
                }
                else{
                    cout<<"\nInsufficient balance.";
                }
            }
            else{
                cout<<"\nAccount is not found.";
            }
        }
    }
    void display(){
        cout<<"\nACCOUNT NUMBER: "<<account<<"\nNAME: "<<name<<"\nBALABCE: "<<balance<<endl;
    }
};

int main(){
    bank_account obj[5];
    int x,a,i;
    float y,b;
    cout<<"\nEnter the account number in which amount is to deposited: ";
    cin>>x;
    cout<<"\nEnter the amount to br deposited: ";
    cin>>y;
    deposit(obj,5,x,y);
    cout<<"\nEnter the account number from which amount is to withdrawn: ";
    cin>>a;
    cout<<"\nEnter the amount to br deposited: ";
    cin>>b;
    withdraw(obj,5,a,b);
    for(i=0;i<5;i++){
        obj[i].display();
    }
    return 0;

}