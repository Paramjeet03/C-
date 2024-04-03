#include<iostream>
using namespace std;
int main(){
    double num1;
    cout<<"enter 1st no. :-"<<"\n";
    cin>> num1;

    double num2;
    cout<<"enter 2nd no. :-"<<"\n";
    cin>> num2;

    string oper;
    cout<<"enter operator (+,*,-,/) :-"<<"\n";
    cin>> oper;

    if(oper=="+"){
        cout<<"result of sum :-"<<num1+num2;

    }
    
    else if(oper=="-"){
        cout<<"result of sub :-"<<num1-num2;
        
    }

    else if(oper=="*"){
        cout<<"result of multiple :-"<<num1*num2;
        
    }

    else if(oper=="/"){
        cout<<"result of divide :-"<<num1/num2;
        
    }

    else

    {
        cout<<"enter a valid operator :-"<<oper<<"  Not vaild";
    }
    
}