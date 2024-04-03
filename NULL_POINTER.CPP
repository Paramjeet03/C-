#include<iostream>
using namespace std;
int main(){
    // null pointer :- pointer which have null address and assignable during the use.
    int *pass=nullptr;
    int x=90;
    pass=&x;

    if (pass==nullptr){
        cout<<"Value is not assign :- "<< pass <<"\n";
    }

    else{
        cout<<"Value is assign "<<"\n";
        cout<<"address :- " << pass <<"\n";
        cout<<"value is :- "<<*pass<<"\n";
    }
}