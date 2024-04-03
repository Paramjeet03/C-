#include<iostream>
using namespace std;
int main(){
    
    int size;
    cout<<"Enter the size of array :- ";
    cin>>size;
    
    string dish[size];
    string temp;
    string quit="q";
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the food u like or q for Quit :-"<<i<<" ";
        std::getline(std::cin,temp);
        if(temp!=quit){
            dish[i]=temp;
        }
        else{
            break;
        }
    }
    for(string food:dish){
        cout<<food<<" \n";
    }
}