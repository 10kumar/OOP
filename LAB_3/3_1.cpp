//WAOOP TO FIND THE AVERAGE OF TWO DECIMAL USING FRIEND FUNCTION.
#include<iostream>

using namespace std;

class friend1{
    float a,b;
    public:
        // void get_value(float i,float j){
        //     a=i;
        //     b=j;
        // }
        friend1(){
            cout<<"Enter two decimal numbers :"<<endl;
            cin>>a>>b;
        }
        friend void calc_avg(friend1);
};

void calc_avg(friend1 x){
    cout<<"\nThe average of "<<x.a<<" and "<<x.b<< " is "<<(x.a+x.b)/2<<endl;
}

int main(){
    friend1 y;
    //y.get_value(2.3,1.9);
    calc_avg(y);
    return 0;
}