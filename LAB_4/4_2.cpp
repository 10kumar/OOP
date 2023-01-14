//WAOOP to find the sum of n natural numbers using parameterized constructor.
#include<iostream>
using namespace std;

class sum{
    int l_num,s;
    public:
        sum(int k){
            s=k;
        }
        void read_data(){
            cout<<"\nEnter the last number: ";
            cin>>l_num;
        }
        void display(){
            cout<<"\nThe sum is "<<s;
        }
        void calc(){
            for(int i=s+1;i<=l_num;i++){
                s+=i;
            }
        }
};

int main(){
    int e;
    cout<<"\nEnter the number from which the sum is to be started: ";
    cin>>e;
    sum obj(e);
    obj.read_data();
    obj.calc();
    obj.display();

    return 0;
}