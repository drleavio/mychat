#include<iostream>
using namespace std;

class student{
    int RollNo;
    string name;
    int Math;
    int physics;
    int chemistry;
    public:
    student(int RollNo,string name,int Math,int physics,int chemistry){
        this->RollNo=RollNo;
        this->name=name;
        this->Math=Math;
        this->physics=physics;
        this->chemistry=chemistry;
    }
    int totalMarks();
    char grade();
};

int student::totalMarks(){
    return Math+physics+chemistry;
}
char student::grade(){
    if(totalMarks()>=250) return 'a';
    else if(totalMarks()<250 && totalMarks()>=150) return 'b';
    else return 'c';
}

int main(){
        student st1(10,"Rahul",80,90,10);
        cout<<st1.grade()<<endl;
        cout<<st1.totalMarks()<<endl;
        cout<<st1.totalMarks()<<endl;
        cout<<st1.totalMarks()<<endl;
        cout<<st1.totalMarks()<<endl;
    return 0;
}