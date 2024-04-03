// uniary operator_overloading :-

#include<iostream>
using namespace std;

class suraj{
    public :
        int a,b,c;

        void getdata(int x,int y,int z){
            a=x;
            b=y;
            c=z;
        }

        void display(){
                cout<<" a :- "<<a<<"\n";
                cout<<" b :- "<<b<<"\n";
                cout<<" c :- "<<c<<"\n";
        }

        operator-(){
            a=-a;
            b=-b;
            c=-c;
        }
};

int main(){
    suraj s;
    s.getdata(10,20,30);
    s.display();
    cout<<"\n -: S on operator :- \n";
    -s;
    s.display();

    
}