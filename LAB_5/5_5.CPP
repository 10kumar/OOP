//WAOOP to demonstratr unary (--) operator overeloading.
#include<iostream>
using namespace std;

class test{
    int a,b,c;
    public:
        void read_data(int x,int y,int z);
        void display(){
            cout<<"\n"<<a<<"\t"<<b<<"\t"<<c<<endl;
        }
        void operator --();
};
void test::read_data(int x,int y,int z){
    a=x;
    b=y;
    c=z;
}

void test::operator --(){
    --a;
    --b;
    --c;
}

int main(){
    test obj;
    obj.read_data(5,6,7);
    cout<<"\nBefore operator overloading,"<<endl;
    obj.display();
    --obj;
    cout<<"\nAfter operator overloading,   "<<endl;
    obj.display();
    return 0;
}