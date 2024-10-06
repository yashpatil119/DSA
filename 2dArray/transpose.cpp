#include<iostream>
using namespace std;

void printArray(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
    
}
void transPose(int arr[3][3],int row,int col)
{
     for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
           swap(arr[i][j],arr[j][i]);
        }
        
     }
}



int main(){
    
  int arr[3][3]={
      {10,20,30},
      {40,50,60},
      {70,80,90}
  };
  
  int row=3;
  int col=3;
  cout<<"Printing Before Transpose :"<< endl;
  printArray(arr,row,col);
  
  cout<<"Doing Transpose :"<< endl;
  transPose(arr,row,col);
  
  cout<<"Printing after Transpose :"<< endl;
  printArray(arr,row,col);
  
 
}