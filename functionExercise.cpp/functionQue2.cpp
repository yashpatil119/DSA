#include<iostream>

using namespace std;

int printSum(int a,int b,int c)
{
    int sum=a+b+c;

    return sum;
}

int main()
{
   int sum= printSum(2,5,8);
   cout<<"sum is:"<<sum;
}