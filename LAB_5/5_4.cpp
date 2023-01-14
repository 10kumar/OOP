//WAOOP to demonstrate binary (-) operator overeloading.
#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
        void read_data(int x,int y);
        void display(){
            cout<<"\n"<<a<<"\t"<<b<<endl;
        }
        test operator -(test &obj2);
};
void test::read_data(int x,int y){
    a=x;
    b=y;
}

test test::operator -(test &obj2){
    test obj3;
    obj3.a=a-obj2.a;
    obj3.b=b-obj2.b;
    return obj3;
}
int main(){
    test obj1,obj2,obj3;
    obj1.read_data(5,6);
    obj2.read_data(4,2);
    obj3=obj1-obj2;
    cout<<"\nAfter operator overloading,"<<endl;
    obj3.display();
    return 0;
}
