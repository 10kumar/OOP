//WAOOP for class type to class type conversion

#include<iostream>
using namespace std;

class hour{            //  destination class
    float h;
    public:

        hour(){
            h=0;
        }
        
        void show(){
            cout<< h;
        }
        void get_data(float t){
            h=t;
        }
       // hour(minute &m1){
       //     h=(float)m1.getval()/60;
       // }
};
class minute{          // source class
    int m;
    public:
        //minute(){}
        minute(int ms){
            m=ms;
        }   
        //int getval(){
        //    return m;
        //}
         operator hour(){
            hour h1;
            float y;
            y=(float)m/60;
            h1.get_data(y);
            return (h1);
         }
        void show(){
            cout << m;
        }
};


int main(){
    int x;
    cout<<"Enter time in minutes: ";
    cin>>x;
    minute min(x);
    hour hr;
    // hour h1(&min);
    hr=min;
    cout << "\nTime in minutes is ";
    min.show();
    cout << "\nCorrosponding time in hours is ";
    hr.show();
    return 0;
}