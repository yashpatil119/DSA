#include<iostream>

using namespace std;

void shiftleft(int arr[],int n){
    int j=0;//jaha par -ve no. store honge
    for(int i=0;i<n;i++){
        if(arr[i] < 0){
             swap(arr[i], arr[j]);
             j++;
        }
    }
}

int main(){
    int arr[] ={11,-20,-30,54,88,-22};
    int n=6;
   shiftleft(arr,n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }


}