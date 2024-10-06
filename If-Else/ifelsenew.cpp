#include<iostream>
using namespace std ;

int main()
{
    int n;
    cin>>n;
    cout<<"the number is "<< n <<endl;

    if(n>0)
    {
        cout<< "the number is positive"<<endl;

    }
    else if(n<0)
    {
        cout << "the number is negative"<<endl;
    }
    else{
        cout<<"num is equal zero"<<endl;
    }
}