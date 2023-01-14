//WAOOP TO DISPLAY THE DETAILS OF BOOKS AND BY USING THE THEORY OF STATIC DATA MEMBER ,DISPLAY THE NO OF THE BOOKS.
#include <iostream>

using namespace std;

class book{
    int code;
    float price;
    static int count;
    public:
        void read_data(){
            cout<<"\nEnter the code of the book: ";
            cin>>code;
            cout<<"Enter the price of the book: ";
            cin>>price;
            count++;
        }
        void display(){
            cout<<"The details of the book is as follw:"<<endl;
            cout<<"Book Code: "<<code<<"\nPrice: "<<price<<endl;
        }
        static void display_count(){
            cout<<"\nThe value of count till now is "<<count<<endl;
        }
};

int book::count=0;

int main(){
    book bk;
    bk.read_data();
    bk.display();
    bk.display_count();                  //one way of calling stasic function i.e. using object and dot operator.

    book bk1;
    bk1.read_data();
    bk1.display();
    book::display_count();               //other way of calling stasic function i.e. using class and scope resolution operator.

    book bk2;
    bk2.read_data();
    bk2.display();
    book::display_count();

    return 0;
}

