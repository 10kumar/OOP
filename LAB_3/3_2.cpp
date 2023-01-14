//WAOOP TO DISPLAY A STUDENT DETAILS USING POINTER TO CLASS.
#include <iostream>

using namespace std;

class pc{
    int roll;
    char name[15];
    float mark;
    public:
        void read_data();
        void display();
};

void pc::read_data(){
    cout<<"Enter the roll: ";
    cin>>roll;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the mark obtained: ";
    cin>>mark;
}

void pc::display(){
    cout<<"STUDENT'S DETAILS:";
    cout<<"\n"<<roll<<"\t"<<name<<"\t"<<mark;
}

int main(){
    pc obj;
    pc *ptr=&obj;

    ptr->read_data();
    ptr->display();

    return 0;
}