#include<iostream>

using namespace std;


int main()
{
    // What is a pointer --->data types which holds th address of other datatypes

    int a=3;
    int * b= &a;
    // & --->(Address of ) Operator
    cout<<"The address of a is :"<<&a<<endl;
    cout<<"The address of a is :"<<b<<endl;

    //  * --->(Value at) Dereference operator
    cout<<"The value at address b is:"<<*b<<endl;

    //Pointer to Pointer 

    int** c= &b;
    cout<<"Address of b is:"<<&b<<endl;
    cout<<"Address of b is:"<<c<<endl;
    cout<<"The value at address c is:"<<*c<<endl;
    cout<<"The value at address value at(value_at(c)) is:"<<**c<<endl;

    return 0;



}