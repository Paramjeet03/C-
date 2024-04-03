#include<iostream>
using namespace std;
int main(){
    int i=-1,j=0;
    string sim="*";
    
    while (i<=10)
    {
      while (j<=i)
      {
        sim.append("*");
        j++;
      }
      cout << sim<<"\n";
     i++;
    }
    return 0;
}