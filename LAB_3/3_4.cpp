//WAOOP  ,USING FRIEND FUNCTION ACCESSING TWO CLASSES ,TO SWAP THE DATA MEMBER OF THESE CLASSES.
#include <iostream>

using namespace std;
class object2;
class object1{
    int a,b;
    public:
        void get_value(int x,int y){
            a=x;
            b=y;
        }

        void display(){
            cout<<"\nThe value of a is "<<a;
            cout<<"\nThe value of b is "<<b;
        }
        friend void swap_obj(object1,object2);
};
class object2{
    int a,b;
    public:
        void get_value(int x,int y){
            a=x;
            b=y;
        }

        void display(){
            cout<<"\nThe value of a is "<<a;
            cout<<"\nThe value of b is "<<b;
        }
        friend void swap_obj(object1,object2);
};

void swap_obj(object1 obj1,object2 obj2){
    object1 obj;
    obj.a=obj1.object1::a;
    obj1.object1::a=obj2.object2::a;
    obj2.object2::a=obj.a;

    obj.b=obj1.object1::b;
    obj1.object1::b=obj2.object2::b;
    obj2.object2::b=obj.b;
    cout<<"\n\nAfter swapping,"<<endl;
    cout<<"For object 1"<<endl;
    obj1.display();
    cout<<"\n\nFor object 2"<<endl;
    obj2.display();
}

int main(){
    object1 x;
    object2 y;
    x.get_value(5,8);
    y.get_value(1,9);
    cout<<"Before swapping,"<<endl;
    cout<<"For object 1"<<endl;
    x.display();
    cout<<"\n\nFor object 2"<<endl;
    y.display();
    swap_obj(x,y);
}
