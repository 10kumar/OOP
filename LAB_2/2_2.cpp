//WAOOP TO ENTER FIVE STUDENTS DETAILS.
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
    cout<<"\nEnter the roll:"<<endl;
    cin>>roll;
    cout<<"Enter the name:"<<endl;
    cin>>name;
    cout<<"Enter the 3 marks:\n";
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
    cout<<"\n-------------------------------------------------------------\n"<<roll<<"\t"<<name<<"\t"<<m[0]<<"\t"<<m[1]<<"\t"<<m[2]<<"\t"<<total<<"\t"<<grade;
}

int main(){
    student s[5];
    int i;
    for(i=0;i<5;i++){
        cout<<"\nFOR STUDENT "<<i+1<<endl;
        s[i].read_data();
        s[i].get_grade();
    }
    cout<<"\n-------------------------------------------------------------\nROLL\tNAME\tMARK1\tMARK2\tMARK3\tTOTAL\tGRADE";
    for(i=0;i<5;i++){
        s[i].display();
    }
    cout<<"\n-------------------------------------------------------------";
    
    return 0;
}