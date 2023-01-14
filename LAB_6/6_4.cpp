//WAOOP to demonstrate use of pure virtual function and abstract base class.
#include <iostream>
using namespace std;

class abstract{
    public:
       virtual void read_dimension()=0;
       virtual void perimeter()=0;
       virtual void display()=0;
};

class rectangle:public abstract{
    float l,b,peri;
    public:
    void read_dimension(){
       cout<<"ENTER THE LENGTH AND WIDTH OF THE RECTANGLE RESPECTIVELY:"<<endl;
       cin>>l>>b;
    }
    void perimeter(){
        peri=2*(l+b);
    }
    void display(){
        cout<<"The perimeter of the rectangle is "<<peri;
    }
};
int main(){
    abstract* r(new rectangle);
    r->read_dimension();
    r->perimeter();
    r->display();
}