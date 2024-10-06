#include<iostream>
using namespace std;

void printEvenOdd()
{
    int n ;
    cin>>n;
    
    if(n % 2 == 0)
    {
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
}

int main()
{
    printEvenOdd();
    
}