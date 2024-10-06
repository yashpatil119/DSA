#include<iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    if(age<18)  
    {
        cout<<"not eligible for job"<<endl;
    }
    else if(age >=18 && age <= 54)

    {
        cout<<"eligible for job"<<endl;

    }
     else if(age >=54 && age <= 57)

    {
        cout<<"eligible for job but retirment soon"<<endl;
        
    }
    else if(age>57)
        
        {
            cout<<"retirement time"<<endl;
        }
return 0;
}
