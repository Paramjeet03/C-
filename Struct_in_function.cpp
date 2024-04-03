#include<iostream>
using namespace std;
struct student{
    string name;
    int age;
    string branch;
};


void print_student(student Student);


int main(){

student student1;
student1.name="RAHUL";
student1.age=20;
student1.branch="C.S.E";

student student2;
student2.name="ROHIT";
student2.age=25;
student2.branch="CIVIL";


student student3;
student3.name="MOHIT";
student3.age=25;
student3.branch="ELECTRICAL";


print_student(student3);
}

void print_student(student Student){
    cout<<"Student name :- "<<Student.name<<"\n";
    cout<<"Student age :- "<<Student.age<<"\n";
    cout<<"Student branch :- "<<Student.branch<<"\n";
}