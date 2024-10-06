//there are two types of header files 
// 1.System header file : It coes with compiler 
// Example:
#include<iostream>
// 2.User defined Header file : 
// Example:
//#include "this.h" -->this will produce a error if this.h is no present in current directory


using namespace std;

int main() 
    {
        int a=5, b=2;
        cout<<"Operators in C++:"<<endl;
        cout<<"Following are types of operators in cpp:"<<endl;
        //Arithmetic Operators:
        cout<<"The Addition of the a and b is:"<<a+b<<endl;
        cout<<"The Subtraition of the a and b is:"<<a-b<<endl;
        cout<<"The Multiplition of the a and b is:"<<a*b<<endl;
        cout<<"The Division of the a and b is:"<<a/b<<endl;
        cout<<"The value of the a % b is:"<<a%b<<endl;
        cout<<"The value  of the a++ is:"<<a++<<endl;
        cout<<"The value of the ++a is:"<<++a<<endl;
        cout<<"The value of the a-- is:"<<a--<<endl;
        cout<<"The value of the --a is:"<<--a<<endl;

        //Assignment Operators --> used to assign values to variables
        //Example
       // int a=3;
        //char c='d';


        //Comparision operators
        cout<<"Following are the Comparision operators in cpp:"<<endl;
        cout<<"The value of the a==b is:" << a==b<<endl;   
        cout<<"The value of the a!=b is:"<< a!=b<<endl;
        cout<<"The value of the a<=b is:"<< a<=b<<endl;
        cout<<"The value of the a>=b is:"<< a>=b<<endl;
        cout<<"The value of the a<b is:"<< a<b <<endl;
        cout<<"The value of the a>b is:"<< a>b << endl;

        //Logical Operators

        cout<<"following are logical operators in cpp:"<<endl;

        cout<<"The value of this logical and operator ((a==b) && (a<b)) is :"<<((a==b) && (a<b))<<endl;//both condition must be true
         cout<<"The value of this logical and operator ((a==b) || (a<b)) is :"<<((a==b) || (a<b))<<endl;//atleast one condition must be true 
          cout<<"The value of this logical and operator (!(a==b)) is :"<<(!(a==b))<<endl;// it reverse the result 0 ka one viceversa




        return 0;


 

    }