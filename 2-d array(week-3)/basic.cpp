#include <iostream>
using namespace std;

int main() {
  //initialisation 
  int arr[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };
  cout<<"row-wise"<<endl;
  //row-wise print
  //outer loop
  for(int i=0;i<3;i++)
  {
    //for ever row, we need to print value in each column
    for(int j=0;j<3;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"col-wise"<<endl;
  //col-wise
  //outer loop
  for(int i=0;i<3;i++)
  {
    //for ever row, we need to print value in each column
    for(int j=0;j<3;j++){
      cout<<arr[j][i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
