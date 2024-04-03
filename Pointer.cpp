#include<iostream>
using namespace std;
int main(){
    //pointer :- It is a variable which store the the address of an another variable. sometime is too work on ADDRESS.
    // & ADDRESS OF OPERATOR.
    // * DEREFERENCE OPERATOR.
    string name="suraj";
    int age = 20;
    
    string *naam = &name;
    int *umar= &age;

    cout<<"without *   :-   "<<naam<<"\n"<<"\n";
    cout<<"with *   :-   "<<*naam;
} 