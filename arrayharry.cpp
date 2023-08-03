#include<iostream>

using namespace std;

int main()
{
    //Array Example
    int mark[5]={45,67,56,70,50};

    int mathmark[4];

    mathmark[0] = 4566;
    mathmark[1] = 66;
    mathmark[2] = 566;
    mathmark[3] = 7;

    cout<<"These are the maths marks:"<<endl;
    cout<<mathmark[0]<<endl;
    cout<<mathmark[1]<<endl;
    cout<<mathmark[2]<<endl;
    cout<<mathmark[3]<<endl;

    cout<<"These are the marks"<<endl;
    cout<<mark[0]<<endl;
    cout<<mark[1]<<endl;


    //You can Change the value of array 

    mark[2]=409;
    /*cout<<mark[0]<<endl;
    cout<<mark[1]<<endl;
    cout<<mark[2]<<endl;
    cout<<mark[3]<<endl;*/

    /*for(int i=0; i<5; i++)
    {
        cout<<"The value of mark"<<i<<" is "<<mark[i]<<endl;
    }*/

    int i;
    /*while(i<5)
    {
        cout<<"The vaule of mark"<<i<<" is "<<mark[i]<<endl;
        i++;
    }*/

    do
    {
        cout<<"The value of mark"<<i<<" is "<<mark[i]<<endl;
    } while(i<5);



    return 0;
        

    




}