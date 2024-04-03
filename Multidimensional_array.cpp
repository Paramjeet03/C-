#include<iostream>
using namespace std;
int main(){
    string cars[3][2]={{"alto","swift"},{"audi","bmw"},{"lambogini","porshe"}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<cars[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}