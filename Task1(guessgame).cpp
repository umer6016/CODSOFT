#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
    int a = rand();
    int g;
    cout<<"Guess the number, you have 5 tries : "<<endl;
    for (int i = 0; i < 5; i++)
    { 
        cin>>g;
        if(g==a)
        {
            cout<<"Congrats! got it right \n The number was :"<<a;
        } 
        else if(g>a)
        {
            cout<<"Your number is higher than the required one! " <<endl;
        }
        else if(a>g)
        {
            cout<<"Your number is lower than the required one! " <<endl;
        }
    }
    cout<<"Oops you are out of tries, The number was : "<<a; 
    return 0; 
}