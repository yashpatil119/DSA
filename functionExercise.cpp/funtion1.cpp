#include<iostream>
using namespace std;

void printMaximum(int num1,int num2,int num3)
{
    if(num1>num2 && num1>num3)
    {
        cout<<" maximum number is: "<<num1<<endl;
    }
    else if(num2>num1 && num2>num3)
    {
        cout<<" maximum number is: "<<num2<<endl;
    }
    else{
        cout<<" maximum number is: "<<num3<<endl;
    }



}

int main()
{
    printMaximum(7,3,1);
}
//another approach
/*
#include<iostream>

using namespace std;

void printMaximum(int num1 ,int num2 , int num3)
{
   int ans1= max(num1,num2);
   
   int finalans=max(ans1,num3);
   
   cout<<"Final answer is "<<finalans;
}

int main()
{
    printMaximum(45,56,400);
}
*/