#include<iostream>
using namespace std;


bool checkPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            //if remainder is zero then this is not prime num
            return false;
        }
        else{
       //not perfectly divisible then this prime number
       return true;
        }
    }

}

int main()
{
    bool Prime=checkPrime(10);
    if(Prime)
    {
        cout<<"Its prime number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }
    
}