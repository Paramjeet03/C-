#include<iostream>
using namespace std;

void show_balance(double balance);
double withdraw(double balance);
double deposit();

int main()
{
    double balance=0;
    int choice=0;
    do{
        std::cout<<"****************************Bank of world****************************\n";
        std::cout<<"Enter the choice :-\n";
        std::cout<<"*********************************************************************\n";
        std::cout<<"1.show balance\n";
        std::cout<<"2. deposit\n";
        std::cout<<"3. withdraw\n";
        std::cout<<"4. exit\n";
        std::cin>>choice;
        
        cin.clear();
        fflush(stdin);
        
        switch (choice)
        {
        case 1: show_balance(balance);
            break;
        case 2:balance+=deposit();
            show_balance(balance);
            break;
        case 3:balance-=withdraw(balance);
            show_balance(balance);
            break;
        case 4:std::cout<<"Thanks for visiting !!!";
            break;
        default:std::cout<<"Invaild input";
        }
    }while (choice!=4);
     return 0;
}


void show_balance(double balance){
    cout<<"your balance is :- "<<balance<<"\n";

}

double withdraw(double balance){
       double amount =0;
       cout<<"Enter ur amount :- ";
       cin>>amount;
       if (amount>balance)
       {
        cout<<"ur bank balance is low \n";
        return 0;
       }
       else if (amount<0)
       {
        cout<<"Enter a valid amount \n";
        return 0;
       }
       else
       {
        return amount;
       }       
}

double deposit(){
    double amount =0;
    cout<<"Enter ur amount :- ";
    cin>>amount;
    if (amount>0)
    {
        return amount;
    }
    else
    {
        cout<<"Enter a valid amount \n";
    }
    

    
}
