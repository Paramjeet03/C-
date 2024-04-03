#include<iostream>
using namespace std;
int main(){
    // continue :- it skip the iteration.
    // break :- it breakthe loop.
    int i;
    for ( i = 0; i <= 13; i++)
    {
        if(i==10){
            continue;
        }
        cout<<i<<"\n";
    }
}