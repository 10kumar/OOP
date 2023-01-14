//WAOOP to throw and handle 'Division by zero'exceptions

#include<iostream>
using namespace std;

int main(){
    float x,y;
    cout<<"\nEnter the two numbers to be divided respectively: "<<endl;
    cin>>x>>y;
    try{
        if(y==0){
            throw y;
        }
        else{
            cout<<"\nThe division of given numbers is "<<(x/y);
        }
    }
    catch(float y){
        cout<<"\nDivision by "<<y<<" is encountered.";
    }

    return 0;
}
