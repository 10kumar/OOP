/*WAOOP in switch case to perform 
  -Unary operator overloading
  -Binary operator overloading
*/


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
        void operator -();
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

void test::operator -(){
    a=-a;
    b=-b;
}

int main(){
    int select;
    do{
    printf("\n\n>>>>MENU<<<<");
    printf("\n1) binary - operation");
    printf("\n2) unary - operator");
    printf("\n3) Exit the program");
    printf("\n\nSELECT THE OPTION: ");
    cin>>select;
    
    again: switch(select){
            case 1: test obj1,obj2,obj3;
                    obj1.read_data(5,6);
                    obj2.read_data(4,2);
                    cout<<"\nBefore binary - operator overloading"<<endl;
                    cout<<"\nobj1: ";
                    obj1.display();
                    cout<<"\nobj2: ";
                    obj2.display();
                    obj3=obj1-obj2;
                    cout<<"\nAfter binary - operator overloading,"<<endl;
                    cout<<"\nobj3: ";
                    obj3.display();
                    break;
            case 2: test obj;
                    obj.read_data(3,-5);
                    cout<<"\nBefore unary - operator overloading,"<<endl;
                    obj.display();
                    -obj;
                    cout<<"\nAfter unary - operator overloading,"<<endl;
                    obj.display();
                    break;
            case 3: cout<<"....The program is terminated....";
                    break;    
           default: cout<<"PLEASE ENTER A VALID OPTION: ";
                    cin>>select;
                    goto again;
        }
    }while(select!=3);
    
    return 0;
}