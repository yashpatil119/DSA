#include <iostream>

using namespace std;

int main() {
   
  int arr[5]={2,4,5,11,10};
  
  int target=11;
  int n=5;
  //found-->1
  //Not found-->0
  
 bool flag=0;
  
  for(int i=0;i<n;i++){
      if(arr[i]==11){
          flag=1;
          break;
      }
  }
  if(target==11){
      cout<<"Element is found "<<endl;
  }
  else{
      cout<<"Element is not found"<<endl;
  }
     

    return 0;
}