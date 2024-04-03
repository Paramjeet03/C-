#include<iostream>
namespace first{
    int x=50;
}
namespace second{
    int x=20;
}
int main(){
    //namespace :- as we know varaiable having a unique name but we want too assign diff. with same name then we use namespace.
    double x=10;
    std::cout<<x <<" 1st "<<first::x<<" 2nd "<<second::x;
}