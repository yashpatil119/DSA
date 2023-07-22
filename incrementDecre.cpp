#include<iostream>
using namespace std;

int main()

{
    int i= 7;

    cout << (++i) << endl;
    //i=8,8
    cout << (i++) << endl;
    //i=8,9
    cout << (i--) << endl;
    //i=9,8
    cout << (--i) << endl;
    //i=7,7
}