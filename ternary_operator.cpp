#include<iostream>
using namespace std;
int main(){
    //ternary operator :- it a replacement of if else condition.
    int num1;
    cout<<"***** Even odd no. finder ***** \n";
    cout<<"enter no. :- \n";
    cin>>num1;
    // syntax :- condition ? if code : else code.
    num1%2==0 ?  cout<<"this is even no." : cout<<"this is odd no.";

}
