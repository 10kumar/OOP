//WAOOP to sort an integer array and float array,using function template.

#include<iostream>
using namespace std;
template <class T>

void sort(T a[],int m){
    T temp;
    int i,index;
    for (i=0; i<m-1; i++){
        for (index=0; index<m-i-1; index++){
            if (a[index] > a[index+1]){
                temp= a[index];
                a[index] = a[index+1];
                a[index+1]= temp;
            }
        }
    }
    for(i=0;i<m;i++){
        cout<<a[i]<<"\t";
    }
}

int main(){
    int n;
    cout<<"\nEnter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter the elements in the integer array"<<endl;
    for(int i=0;i<n;i++){
            cin>>a[i];
        }
    cout<<"\nSorted int array:"<<endl;
    sort(a,n);

    float f[n];
    cout<<"\nEnter the elements in the float array"<<endl;
    for(int i=0;i<n;i++){
            cin>>f[i];
        }
    cout<<"\nSorted float array:"<<endl;
    sort(f,n);

    return 0;
}