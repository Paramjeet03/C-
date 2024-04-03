#include<iostream>
using namespace std;
void pizza(string topping3,string topping2);
int main(){
   string topping3=" Panner ";
   string topping2= " mushroom";
    pizza(topping3,topping2);
}
void pizza(){
    cout<<"I love pizza";
}
void pizza(string topping1){
    cout<<"I love "<<topping1<<"pizza \n";
}

void pizza(string topping2, string topping3){
    cout<<"I love "<<topping3<<" and "<<topping2 <<"pizza \n";
}

// A fuc.have same name but different parameters this is also know as function overloaded