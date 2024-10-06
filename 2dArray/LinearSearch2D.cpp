#include<iostream>

using namespace std;

bool TwoDLinearSearch(int arr[3][3],int row ,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }

    }
    //agar element nhi mila toh hi is line pe ayega aur false return kr dega
    return false;
}    


int main(){
    
  int arr[3][3]={
      {10,20,30},
      {40,50,60},
      {70,80,90}
  };
  
  int row=3;
  int col=3;
  int target=70;
  cout<<"Element found or Not:"<<TwoDLinearSearch(arr,row,col,target);
}
