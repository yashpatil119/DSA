#include<iostream>

using namespace std;

int main()
{
    int arr[10];
    int n=10;
    for(int i= 0;i<n;i++)
    {
        cout<<"Enter the Array indexing"<<i<<":";
        cin>>arr[i];
    }
    
    cout<<"Printing Array element after taking input"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    cout<<"printing of array element with double value"<<endl;
    for(int i =0;i<n;i++)
    {
        arr[i]=2*arr[i];
        cout<<arr[i]<<endl;
    }
}