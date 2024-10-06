#include<iostream>

using namespace std;

void printSumUptoN(int n)
{
   int sum=0;
   
   for(int i=0;i<=n;i++)
   {
       sum=sum + i;
   }
   
   cout<<"Final Sum is :"<<sum<<endl;
}

int main()
{
    printSumUptoN(10);
}