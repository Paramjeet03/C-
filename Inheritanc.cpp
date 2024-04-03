#include<iostream>
using namespace std;

class A {
    public:
    void a(){
        cout<<"This is class a";
    }
};

class B : public A{
    public:
    void b(){
        cout<<"This is class B";
    }
};

class C : public A {
    public:
    void c(){
        cout<<"This is class c";
    }
};

class D: public C , public B {
    public:
    void d(){
        cout<<"This is class d";
    }
};

int main(){
    
    D hanji;
    hanji.B::a();
}
