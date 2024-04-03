#include<iostream>
using namespace std;
class a{
    public:
        string name;
        int age;
        string DOB;
        int a;
        int b;

     void name1(string name1){
        cout<<"Developer name "<<name1;
    }
};

int main(){
    a a1;
    a1.name="suraj";
    a1.age=21;
    a1.DOB="21|11|2003";
    string naam ="paramjeet";


    std::cout<<"NAME:- "<<a1.name<<"\n";
    std::cout<<"AGE:- "<<a1.age<<"\n";    
    std::cout<<"D.O.B:- "<<a1.DOB<<"\n";
    
    a1.name1(naam);
}