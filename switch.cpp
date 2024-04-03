#include<iostream>
using namespace std;
int main(){
// switch statement is a alternative of if-else.
int month;
cout<<"enter month (1-12)" ;
cin>>month;
switch(month) {
    case 1:
    std::cout<<"This is jan";
    break;

    case 2:
    std::cout<<"This is feb";
    break;

    case 3:
    std::cout<<"This is march";
    break;

    case 4:
    std::cout<<"This is apirl";
    break;

    case 5:
    std::cout<<"This is may";
    break;

    case 6:
    std::cout<<"This is june";
    break;

    case 7:
    std::cout<<"This is july";
    break;

    case 8:
    std::cout<<"This is aug";
    break;

    case 9:
    std::cout<<"This is sept";
    break;

    case 10:
    std::cout<<"This is oct";
    break;
    
    case 11:
    std::cout<<"This is Nov";
    break;

    case 12:
    std::cout<<"This is dec";
    break;

    default :
    std::cout<<"enter month in the form of int(1-12)";
}
}