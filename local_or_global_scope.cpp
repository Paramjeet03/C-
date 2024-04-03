// local scope :- the variable declared inside the function is come in local scope and it not callable outside the function.for ex :- int a
// global scope :- the variable declared outside the function is come in global scope and it  callable outside the function as well as inside the function.for ex :- int b
#include<iostream>
using namespace std;
int b=10;
void scope(){
    int a=10;
   // cout<<a<<"\n";
    cout<<"Num b is :- "<<b;
}
int main(){
    //cout<<a<<"\n";
    cout<<"Num b is :- "<<b;
}