
/*WAOOP using single inheritance to calculate the grade of the students, use the
parent class person to read the name and use the child class to read three marks 
of the student and display the grade.                                         */
#include<iostream>
using namespace std;

class person{
    protected:
    char name[10];
    public:
        void read_name(){
            cout<<"\nEnter the name of the student: ";
            cin>>name;
        }
        // void display_name(){
        //     cout<<"\nThe name of the student is "<<name;
        // }       
};

class student:public person{
    int m[3];
    int total;
    char grade;
    public:
        void read_mark(){
            cout<<"Enter the three marks"<<endl;
            for(int i=0;i<3;i++){
                cin>>m[i];
            }
        }
        void calc_grade(){
            int total=0;
            for(int i=0;i<3;i++){
                total+=m[i];
            }
            if(total>=270)
                grade='O';
                else if(total>=240)
                    grade='E';
                    else if(total>=210)
                         grade='A';
                        else if(total>=180)
                            grade='B';
                            else if(total>=150)
                                grade='c';
                                else if(total>=120)
                                    grade='D';
                                    else 
                                        grade='F';
        }
        void display(){
           // display_name();
            cout<<"\nThe name of the student is "<<name<<endl;
            cout<<"\nThe grade obtained by the student is "<<grade;
        }
};

int main(){
    student stud;
    stud.read_name();
    stud.read_mark();
    stud.calc_grade();
    stud.display();
    return 0;
}