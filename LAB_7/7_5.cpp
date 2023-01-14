//WAOOP  TO DEMONSTRATE EXCEPTION HANDLING
#include<iostream>
using namespace std;

int main(){
    float x,y;
    cout<<"\nEnter two number:"<<endl;

    cin>>x>>y;
    try{
        if(y==0){
            throw y;
        }
        else{
            cout<<"\nThe division of x and y is "<<(x/y);
        }
    }
    catch(float y){
        cout<<"\nDivision by zero is encounter.";
    }

    return 0;
}
