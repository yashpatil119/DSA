#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row=0;row<n;row++)
    {
        
        
        //for space
        for(int col=0;col<row;col++)
        {
            cout<<" ";
        }

        //for star
        for(int col=0;col<n-row;col++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
        
    }
}