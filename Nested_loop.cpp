#include<iostream>
using namespace std;
int main(){
    int row ;
    string symbol;
    int coloum;
    cout<<"enter the row :- ";
    cin>>  row ;
    cout<<"enter the coloum :- ";
    cin>>  coloum;
    cout<<"enter the symbol :- ";
    cin>>  symbol;
    for (int i = 0; i < row; i++)
    { 
        for (int j = 0; j < coloum; j++)
        {
            cout<< symbol;
            }
    cout<<"\n";
    }
    
}