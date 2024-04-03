#include<iostream>
using namespace std;
int search_array(int num[],int size,int req){
    for (int i = 0; i < size; i++)
    {
        if (req==num[i])
        {
            return i;
            break;
        }            
    }
    return -1;
    
}

int main(){
    int num[]={11,223,555,3545,1515,355,1,2,2,7,3,5,6,4,9,8,10};
    int size=sizeof(num)/sizeof(num[1]);
    int req;
    cout<<"___________________________________________________________________________________________________\n";
    cout<<"Enter the Number U want to find in the array :- \n";
    cout<<"___________________________________________________________________________________________________\n";
    cin>>req;
    int i=search_array(num,size,req);
    if (i!=-1){
        cout<<"Num is found at Index :- "<< i ;
    }
    else
    {
        cout<<"Element is not in Array ";
    }
    
}