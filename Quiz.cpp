#include<iostream>
using namespace std;
int main(){
    
    string quiz[]={"P.M of India","C.M of Haryana","Langauge use in this code","Father of sahil "};
    
    string option[][4]={{"A. Modi\n","B. Rahul\n","C. SAHIL\n","D. Rohit\n"},
    {"A. apporav\n","B. bhupen\n","C. khatar\n","D. yogi\n"},
    {"A. Python\n","B. C #\n","C. java\n","D. C++\n"},
    {"A. Modi\n","B. Rahul\n","C. Paramjeet\n","D. Rohit\n"}};
    
    char answer_key[]={'A','C','D','C'};
    char guess;
    int score=0;
    int size=sizeof(quiz)/sizeof(quiz[0]);
    
    cout<<"****************************************************\n";
    cout<<"Question are given below :-\n";
    cout<<"****************************************************\n";
    
    for (int i = 0; i < size; i++)
    {
        cout<<quiz[i]<<":-\n";
        
    
        for (int j = 0; j < sizeof(option)/sizeof(option[0]); j++)
        {
            cout<<option[i][j]<<"\n";
        }
        cout<<"Enter UR answer :-  ";
        cin>>guess;
        guess=toupper(guess);

        if (guess==answer_key[i])
        {
            cout<<"Correct !!!\n";
            score++;
        }
        else
        {
            cout<<"Wrong !!!\n";
        }
        
        
    }
    cout<<"****************************************************\n";
    cout<<"                    -: RESULT :-                        \n";
    cout<<"****************************************************\n";
    cout<<"No. of Question is Correct :- "<< score<<"\n";
    cout<<"Total No. of Question :- "<< size<<"\n";
    cout<<"PERCENTAGE :- "<<(score/(double)size)*100<<" %"<<"\n";
}