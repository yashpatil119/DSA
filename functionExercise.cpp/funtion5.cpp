#include<iostream>
using namespace std;

void PrintSumOFevenNUM(int n)
{
    int sum=0;
    for(int i =1;i<=n;i++)
    {
        if(i%2==0)
        {
        sum=sum+i;
        }
    }
    cout<<"Final Sum of Even Number is : "<<sum;

}

int main()
{
    PrintSumOFevenNUM(10);
}