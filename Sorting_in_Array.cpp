#include<iostream>
using namespace std;

void sort_array(int array[],int size){
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (array[j]>array[j+1])
            {
               temp=array[j];
               array[j]=array[j+1];
               array[j+1]=temp; 
            }
            
        }   
    }

}

int main(){
    int array[]={555,20,2555,25351,2,8,41,5,48,153,65,48,6555165};
    int size=sizeof(array)/sizeof(array[1]);
    sort_array(array,size);
    for (int array:array)
    {
        cout<<array<<" ";
    }
    
    
}