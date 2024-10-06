#include<iostream>
#include<vector>

using namespace std;


void print(vector<int> v){
    int size= v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
    }
    cout<<"Printing Vector"<<endl;

}

int main(){

  vector<char> v;
  v.push_back('a');
  v.push_back('b');
  v.push_back('c');


  cout<<"front Element:"<<v[0]<<endl;
  cout<<"front Element:"<<v.front()<<endl;
  
  cout<<"End Element: "<<v[v.size()-1]<<endl;
  cout<<"End Element: "<<v.back()<<endl;
  








//in vector dont tell the size of the vector
//just keep inserting
 // vector<int> v; //array hi hai

  //insert
  // v.push_back(1);
 // v.push_back(2);
  //v.push_back(3
  //print(v);

  //delete -> Pop -> Pop from end
  //1,2,3
/*v.pop_back();
  print(v);

  v.pop_back();
  print(v);

  v.pop_back();
  print(v);

  //to clear vector
   v.clear();
   v.push_back(50);*/

   //Vector Initilation
  // vector<int>arr={1,2,3,4,5};
   //arr.pop_back();
  // print(arr);

//how to copy vector
//vector<int>arr2(arr);
//print(arr2);


}