#include <iostream>
using namespace std;

int main() {
 int arr[3][3];
 int row =3;
 int col =3;
 
 //input
 //row wise input
for (int i=0;i<row;i++){
  for(int j=0;j<col;j++){
    cin>>arr[i][j];
  }
}
cout<<"printing array row wise"<<endl;
for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
}

cout<<"printing array col wise"<<endl;
for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
    cout<<arr[j][i]<<" ";
  }
  cout<<endl;
}

  return 0;
}
