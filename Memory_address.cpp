#include<iostream>
using namespace std;
int main(){
    // Memory address :- it is the address where the data is store in memory
    string name="Rohit";
    int age=50;
    string Gender="MALE";
    
    cout<<"this is the hexadecimal address of Name  in memory :- "<< &name<<"\n";
    cout<<"this is the hexadecimal address of Age  in memory :- "<< &age<<"\n";
    cout<<"this is the hexadecimal address of Gender  in memory :- "<< &Gender<<"\n";

}