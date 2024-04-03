#include<iostream>
using namespace std;
int suraj_total(int suraj[],int size){
    int total=0;
    for (int i = 0; i < size; i++)
    
    {
        total+=suraj[i];
        
    }
    return total;
}
int main(){
    int suraj[]={1,2,6,4,65,625,3235,5315};
    int size=sizeof(suraj)/sizeof(suraj[0]);
    double total=suraj_total(suraj,size);
    cout<<"Total is Here :- "<<total<<"\n";
}
