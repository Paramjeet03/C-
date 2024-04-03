#include<iostream>
using namespace std;
enum din{sun=1,mon=2,tue=3,wed=4,thus=5,sat=6};

int main(){
    din day=thus;

    switch(day)
    {
    case 1 : cout<<"okay this a sunday"; 
        break;
    case 2 : cout<<"okay this a Monday"; 
        break;
    case 3 : cout<<"okay this a Tuesday"; 
        break;
    case 4 : cout<<"okay this a Wednesday"; 
        break;
    case 5 : cout<<"okay this a Thusday"; 
        break;
    case 6 : cout<<"okay this a Saturday"; 
        break;
    
    default:cout<<"This is not a Working day";
        break;
    }
}