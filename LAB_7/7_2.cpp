//WAOOP for class type to basic type conversion
#include<iostream>
using namespace std;

class sample{
    float a;
    public:
        sample(){
            cout<<"\nEnter a decimal number: ";
            cin>>a;
        }
        operator int(){
            int x;
            x=a;
            return x;
       }
};

int main(){
    sample s;
    int y = s;
    cout<<"\ny = "<<y;
    return 0;
}
