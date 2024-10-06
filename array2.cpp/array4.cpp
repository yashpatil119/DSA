#include<iostream>

using namespace std;

int main()
{
    //taking input in array
    
    int arr[5];
    int n =5;
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value for index"<<i<<":";
        cin>>arr[i];
        cout<<endl;
    }
    
    cout<<"<<<Printing array>>>"<<endl;
    
    for(int i; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}