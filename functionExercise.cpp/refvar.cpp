#include<iostream>

using namespace std;



void callByref(int & k){
    k++;
}



int main(){
      int n;
      cin>>n;
      callByref(n);
      cout<<"n="<<n<<endl;
      
      
      
      
      
      
      
      
      
      
      
      
      
      /*int n=10;//original variable
    int & k=n;//k is nick name or referalname to n
    int & c=n;

    cout<<"the value of n="<<n<<endl;
    cout<<"the value of k="<<k<<endl;
    cout<<"the value of c="<<c<<endl;

    k++;
    cout<<"the value of n="<<n<<endl;
    cout<<"the value of k="<<k<<endl;
    cout<<"the value of c="<<c<<endl;*/


}