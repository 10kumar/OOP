//WAOOP TO throw and handle 'ARRAY OUT OF BOUND' exception

#include<iostream>
#define arr_size 10
using namespace std;

int main(){
    int n;
    int array[arr_size];
    cout<<"\nEnter the size of the array: ";
    cin>>n;
    try{
        if(n>arr_size){
            throw n;
        }
        else{
            cout<<"\nEnter the elements in the array"<<endl;
            for(int i=0;i<n;i++){
                cin>>array[i];
            }
            cout<<"\nThe array: ";
            for(int i=0;i<n;i++){
                cout<<array[i]<<"\t";
            }
        }
    }
    catch(int n){
        cout<<"\nArray is out of bound.";
    }

    return 0;
}

