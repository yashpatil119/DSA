#include<iostream>

using namespace std;

void sortZeroOne(int arr[], int n) {
  int zeroCount = 0;
  int oneCount = 0;
  //stepA: Count 0 and 1
  for(int i=0; i<n; i++) {
    if(arr[i] == 0) 
      zeroCount++;
    if(arr[i] ==1) 
      oneCount++; 
  }


  //EASY WAY
  int index = 0;

  while(zeroCount--) {
    arr[index] = 0;
    index++;
  }

  while(oneCount--) {
    arr[index] = 1;
    index++;
  }
  
}
int main(){
    int arr[] = {0,1,0,1,0,1,1,1,1,0,0,0,0,0};
   int n = 14;

  sortZeroOne(arr, n);
  cout<<sortZeroOne<<endl;
}