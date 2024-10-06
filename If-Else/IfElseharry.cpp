#include<iostream>

using namespace std;

//***************************SELECTION CONTROL STRUCTURE :IF-ELSE LADDER

int main()
{
    int height;
    cout<<"Tell me Your Height"<<endl;
    cin>>height;

    if((height<30)&&(height>20))
    {
        cout<<"You can't Join The Army"<<endl;
    }
    else if(height==30)
    {
        cout<<"Sorry Come Next Year"<<endl;
    }
    else if(height<20)
    {
        cout<<"Your not eligible for this post---"<<endl;
    }
    else{
        cout<<"Congratulation you Selected in Army. "<<endl;
    }
}