#include<bits/stdc++.h>
using namespace std;
//  after modifyinh value ,the original value is copied and printed.

void dosomething(int num){
cout << num << endl;
num += 5;
cout << num << endl;
num += 5;
cout << num << endl;


}
int main()
{
    int num=10;
    dosomething(num);
    cout<<num<<endl;
    return 0;
}