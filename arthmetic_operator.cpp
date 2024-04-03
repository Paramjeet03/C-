#include<iostream>
int main(){
    //arthmetic oper. :- (+,-,/,%,*)
    //1. +
    int a=10;
    //a=a+1;
    //a+=1;
    a++;
    std::cout<<"a :-"<<a<<"\n";
    
    //2. -
    int s=100;
    //s=s+203515;
    s+=203515;
    //s++;
    std::cout<<"s :-"<<s<<"\n";

    //3. *
    int m=100;
    m=m*203515;
    std::cout<<"m :-"<<m<<"\n";

    //4. /
    int d=100;
    d=d/2;
    std::cout<<"d :-"<<d<<"\n";

    //5. for float value (/)
    double f=105251;
    double k=f/2;
    std::cout<<"f :-"<<k<<"\n";

    //6. %
    int r=101;
    r=r%2;
    std::cout<<"R :-"<<r<<"\n";

    // 7. c++ arthmetic oper. follow the rule of (B-O-D-M-A-S).
    double RULE=101+10/20*5-500;
    std::cout<<"RULE :- "<<RULE<<"\n";

}
