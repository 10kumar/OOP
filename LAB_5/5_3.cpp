//WAOOP to demostrate hybride inheritence.
#include<iostream>
using namespace std;

class test{
    public:
        int a;
};
class d1:virtual public test{
    public:
        int b;
};
class d2:virtual public test{
    public:
        int c;
};
class d3:public d1,public d2{
    public:
        int total;
};

int main(){
    d3 obj;
    obj.a=5;
    obj.b=6;
    obj.c=7;
    obj.total=obj.a+obj.b+obj.c;
    cout<<"\nAfter addtion,The sum is "<<obj.total;
    return 0;
}