#include<iostream>

using namespace std;

void printArray(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}


void colWisePrint(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3]={
        {3,4,5},
        {7,8,9},
        {10,11,12}      
    };

    int row=3;
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the input for row wise index:"<<i<<" column wise"<<j<<endl;
            cin>>arr[i][j];
        }
    }
    
    printArray(arr,row,col);
    colWisePrint(arr,row,col);
}
    
    
    //how to take input In 2d array
    
     