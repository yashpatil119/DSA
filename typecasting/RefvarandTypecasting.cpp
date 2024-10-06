#include<iostream>
using namespace std ;
int c=45;


int main()
{
    //***********BUILT IN DATATYPES***********
    /*int a,b,c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    c=a+b;
    cout<<"The sum of a and b is :"<<c<<endl;
    cout<<"The global c is "<< :: c;//to print global variable we use :: this*/


    //****************FLOAT ,DOUBLE ,LONG DOUBLE LITERALS*************//

   /* float a = 34.5F;
    long double e = 34.5L;

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of a is :"<<a<<endl;
    cout<<"The value of e is :"<<e<<endl;*/


    //********************REFERENCE VARIABLE****************//
//Its another name for already exiting variable,also called as alias.

   /* float a=890;

     float & b=a;

     cout<<a<<endl;
     cout<<b<<endl;*/

     //**********************TYPECASTING***********************//

     //It means converting one datatype is another.


      int a = 45;
      float b= 45.67;

      cout<<"The value of a is:"<<float(a)<<endl;
      cout<<"The value of a is:"<<(float)a<<endl;


      cout<<"The value of a is:"<<int(b)<<endl;
      cout<<"The value of a is:"<<(int)b<<endl;

      int c = int(b);

      cout<<"The expression is :"<<a+b<<endl;
      cout<<"The expression is :"<<a+int(b)<<endl;
      cout<<"The expression is :"<<a+(int)b<<endl;





    return 0;


}