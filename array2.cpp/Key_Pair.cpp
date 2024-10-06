#include<iostream>

using namespace std;

bool KeyPairSum(int arr[],int n){
    int x=16;
   for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( arr[i] + arr[j]==x){
                
                return true;
            }
            else{
                false;
            }
        }
   }
}

int main(){
    int arr[]={1,2,4,5,10,6,55};
    int n=7;
    int ans = KeyPairSum(arr,n);
    cout<<"The Pair Sum is :"<<ans;
//this is not a optimal soln because it has Time complexicity of O(n`2)

}