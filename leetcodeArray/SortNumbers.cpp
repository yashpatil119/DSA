#include<iostream>

using namespace std;

void Separate(int arr[],int n){
int j=0;//to store -tive elements
for(int i=0;i<=n;i++){
  if(arr[i]<0){
      swap(arr[i],arr[j]);
      j++;
  }
}
}


int main(){
    int arr[]={11,34,-4,-7,24,3};
    int n=6;
     Separate(arr,n);
     cout<<"Printing Array :"<<endl;
     for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
     }
    
}