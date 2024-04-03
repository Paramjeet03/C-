//return :- it return the value too the respective func.
#include<iostream>
using namespace std;
//double area_square(double lenght){
//    return lenght*lenght;
//}
//int main(){
//    double lenght =10.0;
//   double area= area_square(lenght);
//   cout<<area<<" (cm)^2"<<"\n";
//
//}
// even or odd :-
int even_odd(int num){
    if (num%2==0)
    {
        cout<<"num is even :- "<<num;
    }
    
    else
    {
        cout<<"num is odd :-"<<num;
    }
    
}

int main(){
    int num=10;
    even_odd(num);
}