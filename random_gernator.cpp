#include<iostream>
#include<ctime>
using namespace std;
int main(){
    //pseudo-random :- not truly random but (close)
    srand(time(NULL));
    int sum = rand();
    cout<<sum;
    return 0;
}