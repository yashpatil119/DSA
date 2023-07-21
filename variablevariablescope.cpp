#include<iostream>
using namespace std;
int glo=6;
void sum(){
    int a;
    cout<< glo;
}
 int main()

{
    int glo =9;
    glo = 78;

    int a = 3, b = 5;
    float pi = 3.14;
    char c = 'd';
    bool t= false;


    cout<<"this tutorial4 .\n Here the value of a is ="<<a<<".\nThe value of b is ="<< b;
    cout<<"\nThe value of pi is "<<pi;
    cout<<"\nThe value of char C is "<<c;
    cout<<"\nThe value of t is "<< t;
    sum();
    cout<<"\nThe value of glo "<<glo;
    // note : when we call or print local and global with same name the global variable get called first

}