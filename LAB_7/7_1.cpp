//WAOOP for basic type to class type conversion
#include<iostream>
using namespace std;

class sample{
    int a;
    public:
    sample(){
        a=0;
    }
    sample (float x){
        a=x;
    }
    void display(){
        cout<<"\na = "<<a;
    }
};

int main(){
    float m;
    cout<<"\nEnter a decimal number: ";
    cin>>m;
    sample s;
    s=m;
    s.display();

    return 0;
}