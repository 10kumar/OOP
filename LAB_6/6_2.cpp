/*
  Create a class which stores employee name,id and salary Derive two classes from‘Employee’ class: ‘Regular’ and ‘Part-Time’.
  The ‘Regular’ class stores DA, HRA and basic salary. 
  The ‘Part-Time’ class stores the number of hours and pay per hour.
  Calculate the salary of a regular employee and a par-time employee, using virtual function.
*/

#include<iostream>
using namespace std;
class employee{
    protected:
       char name[10];
       int id;
       float salary;
    public:
       virtual void calc_salary()=0;
       virtual void display()=0;
};

class regular:public employee{
    float basic_salary;
    float da;
    float hra;
    public:
        regular(){
            cout<<"Enter the name , id and basic salary of the regular employee resprctively:"<<endl;
            cin>>name>>id>>basic_salary;
        }
        void calc_extra(){
            da=0.1*basic_salary;
            hra=0.4*basic_salary; 
        }
        void calc_salary(){
            calc_extra();
            salary=basic_salary+da+hra;
        }
        void display(){
            cout<<"\nType           : Regular\nEmployee's name: "<<name<<"\nId             : "<<id<<"\nSalary         : "<<salary;
        }
};

class part_time:public employee{
    int hour;
    float s_per_hour;
    public:
        part_time(){
            cout<<"\n\nEnter the name , id ,work period(in hour) and salary per hour of the part-time employee resprctively:"<<endl;
            cin>>name>>id>>hour>>s_per_hour;
        }
        void calc_salary(){
            salary=hour*s_per_hour;
        }
        void display(){
            cout<<"\nType           : PART-TIMER\nEmployee's name: "<<name<<"\nId             : "<<id<<"\nSalary         : "<<salary;
        }
};

int main(){
    employee* e1(new regular);
    e1->calc_salary();
    e1->display();

    employee* e2(new part_time) ;
    e2->calc_salary();
    e2->display();

    return 0;
}
