#include<iostream>
#include<ctime>
using namespace std;
int main(){
    int orignal;
    int guess;
    int tries =0;
    srand(time(NULL));
    orignal=(rand() % 100) + 1;
     cout<<"******( . )( . )***** Welcome to Number guessing game ******( . )( . )*****";
    do
    {
       
         cout<<"\n"<<"Enter the No. (1-100) :-";
         cin>>guess;
         tries+=1;
         if (orignal < guess)
         {
             cout<<"TOO High"<<"\n";
         }
         else if ((orignal > guess))
         {
            cout<<"TOO LOW"<<"\n";
         }
         else
         {
            cout<<"Hurry, No. is matched"<<"\n"<<"no. tries :-"<<tries<<"\n";
         }
         
          
    } while (orignal != guess);
    
}