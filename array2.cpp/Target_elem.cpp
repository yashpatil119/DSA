#include<iostream>

using namespace std;

int main(){
    int arr[5] = {11,33,34,20,10};
    int n = 5;
    int target = 1;
    bool flag = 0;
     // 0->>not found 
     //1->>found

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=1;
            break;
        }

    }
    if(flag==1){
        cout<<"target found";
    }
    else{
        cout<<"target Not Found";
    }
}