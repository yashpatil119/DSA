#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int n;
    cin>>n;
    int space=2*(n-1);

 for(int i=1;i<=n;i++)
 {
    //numbers
    for(int j=1;j<=i;j++)
{
     cout<<j;
}

    //space
    for(int j=1;j<=space;j++)
    {
        cout<<" ";
    }
    
    //numbers

    for(int j=i;j>=1;j--)
    {
        cout<<j;
    }
    cout<< endl;
    space -= 2;
 }
 return 0;
 }

