#include<iostream>

using namespace std;

void CalculateArea(int r)
{
    float const a =3.14;
    float area = a*r*r;
    
    cout<<"Area of Circle:"<<area<<endl;

}


int main()
{
    CalculateArea(2);
}