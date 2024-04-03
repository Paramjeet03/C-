#include<iostream>
using namespace std;
class a{
    private: 
     int TEMP;
     
    public:

      int setTEMP(int TEMP){
        this->TEMP =TEMP;
      }

      int getTEMP(){
        return TEMP;
    }

};

int main(){
    a a;
    a.setTEMP(0);

    std::cout<<"welcome mr."<<a.getTEMP();

}
