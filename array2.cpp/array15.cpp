#include<iostream>

using namespace std;

//Array right shift
//[10,20,30,40,50,60]
//o/p==[60,10,20,30,40,50]

void shiftArray(int arr[] ,int n){
    int temp=arr[n-1];
    //shift arr[i]=arr[i-1]
    for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    //copy temp 0th index
    arr[0]=temp;
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