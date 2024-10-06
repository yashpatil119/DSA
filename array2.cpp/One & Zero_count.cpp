#include<iostream>

using namespace std;

void solve(int arr[],int n){
    int OneCount=0;
    int TwoCount=0;

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            OneCount++;
        }
        else if(arr[i]==0){
            TwoCount++;
        }
    }
    cout<<"One count is"<<OneCount<<endl;
    cout<<"two count is"<<TwoCount<<endl;

}

int main(){
    int arr[6] = {1,1,1,0,0,1};
    int n=6;

    solve(arr,n);


}