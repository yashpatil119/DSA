#include<iostream>

using namespace std;

int main()

{
    int age;

    cout<<"Tell me Your Age:"<<endl;
    cin>>age;

    //2.****Selection Control Structure :Switch Case Statement

    switch(age)
    {
        case 18:
        cout<<"You are 18"<<endl;
       break;

        case 20:
        cout<<"You are 20"<<endl;
        break;

        case 2:
        cout<<"You are 18"<<endl;
        break;

        default:
        cout<<"NO SPECIAL CASES"<<endl;

        
    }
    cout<<"done with switch case";
    return 0;

}