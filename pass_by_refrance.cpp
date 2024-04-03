#include<iostream>
using namespace std;
void swap(string &x ,string &y){
    string temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){
    string x="jai shree ram";
    string y="hello duniya";
    

    swap(x,y);
    
    cout<<"x :- "<<x<<"\n";
    cout<<"y :- "<<y;
}