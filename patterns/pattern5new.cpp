#include<iostream>
using namespace std;

int main()
{
    int n=4;


    for(int row=0;row<n;row++)
    {
        //for half pyramid
        for(int col=0;col<n-row;col++)
        {
            cout<<"*";
        }
        //for space pyramid
        for(int col=0;col<2*row+1;col++)
        {
            cout<<" ";
        }
        //for half pyramid 
        for(int col=0; col<n-row;col++)
        {
            cout<<"*";
        }
        cout<<endl;

    }

    for(int row=0;row<n;row++)
    {
        //for half pyramid
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }
        //for space pyramid
        for(int col=0;col<2*n-2*row-1;col++)
        {
            cout<<" ";
        }
        //for half pyramid 
        for(int col=0; col<row+1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}