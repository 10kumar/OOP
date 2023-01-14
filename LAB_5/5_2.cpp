//WAOOP to demonstrate multilevel inheritence.
#include<iostream>
using namespace std;

class test{
    public:
        int a;
};
class d1: public test{
    public:
        int b;
};
class d2: public d1{
    public:
        int c;
};
class d3:public d2{
    public:
        int product;
};

int main(){
    d3 obj;
    obj.a=6;
    obj.b=9;
    obj.c=3;
    obj.product=obj.a*obj.b*obj.c;
    cout<<"\nAfter multiplication,The product is "<<obj.product;
    return 0;
}