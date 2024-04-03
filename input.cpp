#include<iostream>
using namespace std;
int main(){
    string name; //str is not work in spaces
    int age;
   

    cout<<"What is ur name ?"<<"\n";
    cin>>name;

    cout<<"What is ur age ?"<<"\n";
    cin>>age;

    cout<<"Hello "<<name<<"\n"<<"You are "<<age<<" years old bro"<<"\n";

    

    //for taking space line:
    string paragraph;
    cout<<"What is ur paragraph ?"<<"\n";
    getline(cin>>ws,paragraph); // ws is use to take all input and avoid break.
    cout<<"result :- "<<paragraph<<"\n";

    
}