//WAOOP TO DISPLAY THE DETAILS OF A PARTICULAR STUDENT AS PER THE USER CHOICE.
#include <iostream>

using namespace std;

class student{
    int roll;
    char name[15];
    float m[3];
    float total;
    char grade;
    public:
    void read_data(){
        cout<<"Enter the roll:"<<endl;
        cin>>roll;
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"\nEnter the 3 marks:\n";
        for(int i=0;i<3;i++){
            cin>>m[i];
        }
    }
    void get_grade(){
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
    void display(){
        cout<<"\n-------------------------------------------------------------\n"<<roll<<"\t"<<name<<"\t"<<m[0]<<"\t"<<m[1]<<"\t"<<m[2]<<"\t"<<total<<"\t"<<grade;
    }
    int check_roll(student *s,int a,int x){
        int i,e=10;
        for(i=0;i<a;i++){
            if(s[i].roll==x){
                e=i;
                break;
            }
        } 
        return e;
    } 
};

int main(){
    student s[5];
    int i,e,user_roll;
    for(i=0;i<5;i++){
        cout<<"\nFOR STUDENT "<<i+1<<endl;
        s[i].read_data();
        s[i].get_grade();
    }
    cout<<"\nENTER THE ROLL OF THE STUDENT WHOSE DETAILS IS TO BE DISPLAY:\n";
    cin>>user_roll;
    for(int i=0;i<5;i++){
        e=s[i].check_roll(s,5,user_roll);
    }
    if(e==10){
        cout<<"The student is not a part of the class.";
        return 0;
    }
    
    cout<<"\n-------------------------------------------------------------\nROLL\tNAME\tMARK1\tMARK2\tMARK3\tTOTAL\tGRADE";
    s[e].display();
    cout<<"\n-------------------------------------------------------------";
    
    return 0;
}