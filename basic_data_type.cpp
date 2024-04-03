#include<iostream>
using namespace std;
int main ()
{
    //1. int :- it contain only num.
    int a;
    int b;
    a=22;
    b=10.1;
    std::cout<<"int"<<a<<"\n"<<"float"<<b<<"\n";
    

    //2.double :- float value
    double c;
    double d;
    c=22;
    d=10.1;
    std::cout<<"C:-"<<"int"<<c<<"\n"<<"D:-"<<"float"<<d<<"\n";
    //3.char :- single character
    char grade ='a';
    char intial='ab';
    std::cout<<"grade :-"<<grade<<'\n'<<"intial :-"<<intial<<"\n";
    
    //3. BOOLEAN (TRUE/FALSE):-
    //bool drink=false;
    //bool tea=true;
    //std::cout<<"chai ha kya ?"<<tea<<"\n";

    //4. string
    std::string name = "ram ram bhai shariya na";
    std::string age ="bhai 20 ka su";

    std::cout<<name<<"\n"<<"bhai umer kitni sa :- "<< age<<"\n";
    return 0;
} 
  