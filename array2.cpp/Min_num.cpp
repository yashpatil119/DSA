#include<iostream>
#include<limits.h>

using namespace std;

int minimum(int arr[],int size){
  int minAns=INT16_MAX;
  for(int i=0;i<size;i++){
    if(arr[i]<minAns){
       minAns = arr[i];
    }
  }
  return minAns;
}


int main(){
    int arr[5]={1,334,43,44,12};
    int size = 5;
    int ans=minimum(arr,size);
    cout<<"Minimum Number is="<<ans;
}