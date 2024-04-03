#include<iostream>
using namespace std;
int main(){
    string santance;
    cout<<"Enter ur words here :- \n ";
    cin>>santance;

    cout<<santance.length()<<"\n";
    cout<<santance.append(" k gyan mettar \n")<<"\n";
    cout<<santance.empty()<<"\n";
    cout<<santance.at(5)<<"\n";
    cout<<santance.find("hi")<<"\n";
    santance.clear();
    cout<<santance;

}