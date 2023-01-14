//WAOOP to find the factorial of a number using default constructor.
#include<iostream>
using namespace std;

class factorial{
    int num;
    int fact;
    public:
        factorial(){
            fact=1;
        }
        void read_data(){
            cout<<"\nEnter a number: ";
            cin>>num;
        }
        void display(){
            cout<<"\nThe factorial is "<<fact;
        }
        void calc(){
            for(int i=num;i>0;i--){
                fact*=i;
            }
            if(num==0){
                fact=1;
            }
        }
};

int main(){
    factorial obj;
    obj.read_data();
    obj.calc();
    obj.display();
    return 0;
}