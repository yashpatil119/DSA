#include<iostream>

using namespace std;





struct employee
{
    int eID;
    char favChar;
    float salary;
};

int main()
{

    struct employee sohan;
    struct employee yash;
    struct employee uday;


    sohan.eID=1;
    sohan.favChar='c';
    sohan.salary=120000000;


    cout<<"The value is "<<sohan.eID<<endl;
    cout<<"The value is "<<sohan.favChar<<endl;
    cout<<"The value is "<<sohan.salary<<endl;

    

}