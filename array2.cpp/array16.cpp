#include<iostream>

using namespace std;
//array left shift

void shiftArray(int arr[] ,int n){
    int temp=arr[0];
    //shift arr[i]=arr[i+1]

    for(int i=n+1;i>=n-1;i++){
        arr[i]=arr[i+1];
    }
    //copy temp 0th index
    arr[n+1]=temp;
}


int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;

    shiftArray(arr,n);

    //print array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}