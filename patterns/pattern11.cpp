#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int n;
    cin>>n;
    int start = 1;

 for(int i=1;i<=n;i++)
 {
    if(i%2==0) start=1;
    else start=0;
    for(int j=0;j<i;j++)
    {
        cout<<start;
        start=1-start;

   }
   cout<<endl;
    
 }
 }
