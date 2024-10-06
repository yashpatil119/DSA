#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
   /* int a = 3.14;

     cout<<"The value of a is :"<<a<<endl;
     a=45; //here value of a is changed to solve this problem we use constant keyword
     cout<<"The value of a is :"<<a<<endl;*/

     //*****************CONSTANT IN C++************************//

   /* const float a=3.14;

     cout<<"The value of a is ="<<a<<endl;
     a=45.6;//You will ger an error because a is constant
     cout<<"The value of a is ="<<a<<endl;*/




     //**********-------<<<MANIPULATORS IN C++>>>>>---------**************
     //by using manipulators we can made numbers right justified 

     int a=5,b=89,c=1333;

     cout<<"The Value of a Without Set W ="<<a<<endl;
      cout<<"The Value of a Without Set W ="<<b<<endl;
       cout<<"The Value of a Without Set W ="<<c<<endl;


        cout<<"The Value of a With Set W ="<<setw(4)<<a<<endl;//a 4 character ki space lega
         cout<<"The Value of a With Set W ="<<setw(4)<<b<<endl;
          cout<<"The Value of a With Set W ="<<setw(4)<<c<<endl;



}