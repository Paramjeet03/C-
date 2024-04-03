#include<iostream>
using namespace std;
string name;
void saatafuction(string name){
   // function :- it is a block of reusable code.
   
   for (int i = 0; i < 5; i++)
   {
       cout<<"Happy birthday"<<name<<"\n";
   }
   
     
}
int main(){
   name=" suraj ";
   saatafuction(name); 
}