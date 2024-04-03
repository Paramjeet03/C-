#include<iostream>
using namespace std;

class student {
    public :
        string name;
        int Roll;
        string standard;
        char section;
        
        student(string name,int Roll,string standard,char section){            
        
        this->name = name     ;
        this-> Roll=Roll  ;
        this-> standard   = standard ;
        this-> section = section;


        }


};

int main(){
    student student1("Paramjeet",1,"5th",'A');
    student student2("Rahul",2,"5th",'A');
    student student3("Mohit",3,"5th",'A');
    student student4("Sohit",4,"5th",'A');
    student student5("Punnit",5,"5th",'A');

    cout<<"\n\n\n";
    cout<<"**************************************** Student info **********************************************\n";
    cout<<"Name :- "<<student1.name<<"\n";
    cout<<"ROLL :- "<<student1.Roll<<"\n";
    cout<<"Class :- "<<student1.standard<<"\n";
    cout<<"Section :- "<<student1.section<<"\n";
    cout<<"*****************************************************************************************************\n";
    cout<<"\n\n\n";
    
    cout<<"\n\n\n";
    cout<<"**************************************** Student info **********************************************\n";
    cout<<"Name :- "<<student2.name<<"\n";
    cout<<"Roll :- "<<student2.Roll<<"\n";
    cout<<"Class :- "<<student2.standard<<"\n";
    cout<<"Section :- "<<student2.section<<"\n";
    cout<<"*****************************************************************************************************\n";
    cout<<"\n\n\n";
    
    cout<<"\n\n\n";
    cout<<"**************************************** Student info **********************************************\n";
    cout<<"Name :- "<<student3.name<<"\n";
    cout<<"Roll :- "<<student3.Roll<<"\n";
    cout<<"Class :- "<<student3.standard<<"\n";
    cout<<"Section :- "<<student3.section<<"\n";
    cout<<"*****************************************************************************************************\n";
    cout<<"\n\n\n";
    
    cout<<"\n\n\n";
    cout<<"**************************************** Student info **********************************************\n";
    cout<<"Name :- "<<student4.name<<"\n";
    cout<<"Roll :- "<<student4.Roll<<"\n";
    cout<<"Class :- "<<student4.standard<<"\n";
    cout<<"Section :- "<<student4.section<<"\n";
    cout<<"*****************************************************************************************************\n";
    cout<<"\n\n\n";
    
    cout<<"\n\n\n";
    cout<<"**************************************** Student info **********************************************\n";
    cout<<"Name :- "<<student5.name<<"\n";
    cout<<"Roll :- "<<student5.Roll<<"\n";
    cout<<"Class :- "<<student5.standard<<"\n";
    cout<<"Section :- "<<student5.section<<"\n";
    cout<<"*****************************************************************************************************\n";
    cout<<"\n\n\n";

}