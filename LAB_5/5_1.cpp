//WAOOP to demonstrate multiple inheritence.
#include<iostream>
using namespace std;


class dog{
    public:
        dog(){
            cout<<"\nIt is a dog.";
        }
};
class cat{
    public:
        cat(){
            cout<<"\nIt is a cat.";
        }
};
class rat{
    public:
        rat(){
            cout<<"\nIt is a rat.";
        }
};
class animal:public dog,public cat,public rat{
    public:
        animal(){
            cout<<"\n\nThey are animals.";
        }
};
int main(){
    animal a;
    
    return 0;
}
    