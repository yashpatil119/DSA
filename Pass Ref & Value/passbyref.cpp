#include<bits/stdc++.h>
//used to modify orignal value
//attach '&' to funtion it takes address and modify

using namespace std;
void dosomething(string &s)
{
 s[0]='t';
 cout << s << endl;
}
int main()
{
    string s = "raj";
    dosomething(s);
    cout<<s<<endl;
    return 0;
}
