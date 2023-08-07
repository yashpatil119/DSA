#include<iostream>

using namespace std;

union money 
{
    int rice;
    char car;
    float pounds;
};


int main()
{
    /*union money m1;

    m1.rice = 34;
    cout<<m1.rice;*/


    //*************************Enum****************//

    enum Meal{breakfast,lunch,dinner};
    Meal m1 = lunch;

    cout<<m1;
}