#include<iostream>
using namespace std;

struct student{
    string name;
    int age;
    bool result;
};

int main(){
    
    student student1;
    student1.name="Rahul";
    student1.age=20;
    student1.result=false;

    student student2;
    student2.name="Ronit";
    student2.age=21;
    student2.result=false;

    student student3;
    student3.name="Rohit";
    student3.age=200;
    student3.result=true;
    
    cout<<"\n";
    cout<<"--------------------------------------------------------\n";
    
    cout<<"student 1 name :- "<<student1.name<<"\n";
    cout<<"student 1 age :- "<<student1.age<<"\n";
    cout<<"student 1 result :- "<<student1.result<<"\n";
    
    cout<<"\n";
    cout<<"--------------------------------------------------------\n";

    cout<<"student 2 name :- "<<student2.name<<"\n";
    cout<<"student 2 age :- "<<student2.age<<"\n";
    cout<<"student 2 result :- "<<student2.result<<"\n";

    cout<<"\n";
    cout<<"--------------------------------------------------------\n";

    cout<<"student 3 name :- "<<student3.name<<"\n";
    cout<<"student 3 age :- "<<student3.age<<"\n";
    cout<<"student 3 result :- "<<student3.result<<"\n";

    cout<<"\n";
    cout<<"--------------------------------------------------------\n";

}