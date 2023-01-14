//WAOOP TO ADD AND MULTIPLY TWO NUMBER.
#include <iostream>

using namespace std;

class test{
    int a,b;
    public:
        inline void get(){
            cout<<"Enter the two number:\n";
            cin>>a>>b;
        }
        inline void add(){
            cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        }
        inline void mul(){
            cout<<"The product of "<<a<<" and "<<b<<" is "<<a*b<<endl;
        }
};

int main(){
    test t;
    t.get();
    t.add();
    t.mul();

    return 0;
}