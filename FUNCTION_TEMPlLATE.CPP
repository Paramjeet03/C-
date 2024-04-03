#include<iostream>

template<typename T,typename U>
T Max(T x,U y){
    return(x>y) ? x : y;
}

int main(){
    std::cout<<Max(2, 6)<<"\n";
    std::cout<<"------------------------------------------\n";
    std::cout<<Max(2.62555, 1)<<"\n";
    return 0;
}