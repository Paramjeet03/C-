#include<iostream>
using namespace std;
int main(){
    // for each loop :- it is a loop in c++ which make the easy traversal of iterable data type(those have index number). like:- array.
    int grades[]={55,60,55,582,58};
    for(int grades : grades){
        cout<<grades<<"\n";
    }
}