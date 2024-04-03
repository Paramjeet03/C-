#include<iostream>
using namespace std;


    //recusion :- a programming technique where a func. invokes itself from within break a complex concept into a repeatable singhe steps.
   
    //advantages :-
    //1)less code. 
    //2) usefull for sorting & seraching algo.
   
    //disadvantage:- 
    //1) use more memory and slower

//  void walk(int steps){
//      for(int i=0;i<steps;i++){
//          cout<<"u step ahead \n";
//          
//      }
//  }

void walk(int steps){
    if(steps>0){
        cout<<"u step ahead \n";
        walk(steps-1);
        
    }
}

int main(){
    walk(100);
}
