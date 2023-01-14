//WAOOP TO ENTER A STUDENT DETAILS.
#include <iostream>

using namespace std;

class student{
    int roll;
    char name[15];
    float m[3];
    float total;
    char grade;
    public:
       void read_data();
       void get_grade();
       void display();
};

void student::read_data(){
    cout<<"Enter the roll:"<<endl;
    cin>>roll;
    cout<<"\nEnter the name:"<<endl;
    cin>>name;
    cout<<"\nEnter the 3 marks:\n";
    for(int i=0;i<3;i++){
        cin>>m[i];
    }
}

void student::get_grade(){
    total=0;
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

void student::display(){
    cout<<"\n-------------------------------------------------------------\nROLL\t\tNAME\tMARK1\tMARK2\tMARK3\tTOTAL\tGRADE";
    cout<<"\n-------------------------------------------------------------\n"<<roll<<"\t"<<name<<"\t"<<m[0]<<"\t"<<m[1]<<"\t"<<m[2]<<"\t"<<total<<"\t"<<grade<<"\n-------------------------------------------------------------";
}

int main(){
    student s;
    s.read_data();
    s.get_grade();
    s.display();

    return 0;
}

