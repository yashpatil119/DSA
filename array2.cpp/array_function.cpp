#include<iostream>

using namespace std;

bool linear_Search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    //not found 
    return false;
}

int main(){
   int arr[5] = {10,20,3,4,5};
    int size = 5;
    int target = 10;

    //function call 
    bool ans=linear_Search(arr,size,target);
    if(ans==1){
        cout<<"target found";
    }
    else{
        cout<<"target not found";
    }

}