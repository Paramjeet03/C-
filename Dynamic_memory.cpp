#include<iostream>
using namespace std;
int main(){
    // Dynamic memory :- Memory that is allocated after the program is already compiled & run.
    // Use "new" to allocated memory in heap rather than stack.
    // Usefull when we don't know how much memory is needed.it make our program more flexible.
    // Especially when user input.

    int *AGE=NULL;
    AGE= new int;

    cout<<"Enter ur age :-  \n";
    cin>>*AGE;

    cout<<"\n";

    cout<<"Value is assign :- "<<"\n";
    cout<<"address :- " <<AGE <<"\n";
    cout<<"value is :- "<<*AGE<<"\n";

}
