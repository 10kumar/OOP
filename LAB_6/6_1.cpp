/*Create a class shape.
  Derive three classes from it; Circle, Square and Triangle.
  Find area of each shape and display it, using virtual function.
*/
#include<iostream>
using namespace std;

class shape{
    public:
        virtual void read_data()=0;
        virtual void area()=0;
};

class circle:public shape{
    float r;
    public:
        void read_data(){
            cout<<"\nEnter radius of circle: ";
            cin>>r;
        }
        void area(){
            cout<<"\nArea of circle is: "<<3.14*r*r<<endl;
        }
};

class square:public shape{
    float s;
    public:
        void read_data(){
            cout<<"\nEnter side of square: ";
            cin>>s;
        }
        void area(){
            cout<<"\nArea of square is: "<<s*s<<endl;
        }
};

class triangle:public shape{
    float b,h;
    public:
        void read_data(){
            cout<<"\nEnter base and height of triangle respectively: ";
            cin>>b>>h;
        }
        void area(){
            cout<<"\nArea of triangle is: "<<0.5*b*h<<endl;
        }
};

int main(){
    shape* c(new circle);
    shape* s(new square);
    shape* t(new triangle);
    c->read_data();
    c->area();
    s->read_data();
    s->area();
    t->read_data();
    t->area();
    return 0;
}


