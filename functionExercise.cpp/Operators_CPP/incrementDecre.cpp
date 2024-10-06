#include<iostream>
using namespace std;

int main()

{
    int i= 7;

//Pre-Increment
    cout <<"++i :"<< (++i) << endl;
   // a=8
    

    //Post Increment
    cout <<"i++ :"<< (i++) << endl;
    //a=8,a=9
    

    //Pre Decrement
    cout <<"--i :"<< (--i) << endl;
    //a=8,a=8
    

    //Post Decrement
    cout <<"i-- :"<< (i--) << endl;
    //a=8,a=7

    cout<<i<<endl;

    int a=10 ;

    cout<<(++a)*10<<endl;

    cout<<(a++)*10<<endl;

    cout<<a<<endl;

    int b=10;

    cout<<((++b)*(b++))<<endl;


    
    
}