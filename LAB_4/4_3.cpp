//WAOOP to demonstrate a copy constructor.
#include<iostream>
using namespace std;

class copy_cons{
    int a,b;
    public:
        copy_cons(int m,int n){
            a=m;
            b=n;
        }
        copy_cons(copy_cons &obj){
            a=obj.a;
            b=obj.b;
            cout<<"\nCopy constructor executed."<<endl;
        }
        void display();
};

void copy_cons::display(){
    cout<<a<<"\n"<<b;
}

int main(){
    copy_cons c1(5,6);
    copy_cons c2=c1;
    c2.display();

    return 0;
}