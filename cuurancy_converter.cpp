#include<iostream>
using namespace std;
int main(){
    int amount;
    string country;
    cout<<"*************This converter Work only on american and indian money **************** \n";
    cout<< "Enter the country NAME :- \n";
    cin>>country;
    if (country == "india" || country == "India" || country == "INDIA"){
        cout<<"Enter the amount in us dollor :- \n ";
        cin>>amount;
        cout<<"In Rupees :- "<<amount * 85.95;}
    
    else if (country == "america" || country == "America" || country == "AMERICA")
    {
        cout<<"Enter the amount in indian rupees :- \n ";
        cin>>amount;
        cout<<"In Dollor :- "<<amount *0.012;
    }
    else
    {
        cout<<"PLZ Enter A Vaild Nation";
    }
} 
