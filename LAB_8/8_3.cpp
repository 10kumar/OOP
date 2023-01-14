//WAOOP to demonstrate multiple catch and catch all
#include<iostream>
using namespace std;

void fact(int a){
    int factorial=1;
    try{
        try{
            if(a>0){
                for(int i=a;i>0;i--){
                    factorial=factorial*i;
                }
                cout<<"\nThe factorial of "<<a<<" is "<<factorial;
            }
            else{
                throw a;
            }
        }
        catch(int a){
            if(a==0){
                cout<<"\nThe factorial of 0 is 1.";
            }
            else{
                throw ;
            }
        
        }
    }
    catch(...){
        cout<<"\n"<<a<<" is a negative number.\nHence,Factorial is not possible.";
    }
}

int main(){
    int x;
    cout<<"\nEnter the number: ";
    cin>>x;
    fact(x);
    return 0; 
}