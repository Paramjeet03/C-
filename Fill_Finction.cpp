#include<iostream>
using namespace std;
int main(){
    // ---> fill :- It is a fumction in array which fill the array with specific value. it have 3 parameter(start,end,value)
    string food[100];
    fill(food,food+50,"pizza");
    fill(food+50,food+100,"hamburger");

    for(string element:food){
        cout<<element<<" \n";
    }
}