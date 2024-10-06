#include<iostream>

using namespace std;

int GetUnique(int arr[],int n){
    int ans = 0;
 for(int i=0;i<n;i++){
    ans=ans^arr[i];
}
return ans;

}


int main(){
     int arr[]={2,10,2,11,15,10,12,15,12};
     int n=9;

     int finalAns=GetUnique(arr,n);
     cout<<"Unique Element from Array="<<finalAns<<endl;

}