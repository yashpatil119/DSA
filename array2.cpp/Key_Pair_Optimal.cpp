#include<iostream>

using namespace std;

bool KeyPairSum(int arr[],int n){
    int x=16;
   int l = 0;
   int h = n-1;
   while(l<h){
    int csum=arr[l] + arr[h];
    if(csum==x ){
        return true;
    }
    else if(csum > x){
        h--;
    }
    else {
        l++;
    }
    
   }
   return false;
}

int main(){
    int arr[]={1,2,4,5,6,10,55};
    int n=7;
    int ans = KeyPairSum(arr,n);
    cout<<"The Pair Sum is :"<<ans;

}