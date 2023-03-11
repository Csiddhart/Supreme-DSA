//MAXI

#include <iostream>
#include<limits.h>
using namespace std;

int getmax(int arr[][3],int row,int col){
  int maxi=INT_MIN;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(arr[i][j]>maxi){
        maxi=arr[i][j];
      }
    }
  }
  return maxi;
}

int main() {
 int arr[3][3]={{1,2,3},{4,5,6},{7,8,0}};
 int row=3;
 int col=3;
 for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
  cout<<arr[i][j]<<" ";
}
cout<<endl;
 }
 int ans=getmax(arr,row,col);
 cout<<"maxi is :-  "<<ans<<endl;
  return 0;
}


//MINI 


#include <iostream>
#include<limits.h>
using namespace std;

int getmax(int arr[][3],int row,int col){
  int maxi=INT_MAX;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(arr[i][j]<maxi){
        maxi=arr[i][j];
      }
    }
  }
  return maxi; // DIDN'T CHANGE THE NAMES
}

int main() {
 int arr[3][3]={{1,2,3},{4,5,6},{7,8,10}};
 int row=3;
 int col=3;
 for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
  cout<<arr[i][j]<<" ";
}
cout<<endl;
 }
 int ans=getmax(arr,row,col);
 cout<<"maxi is :-  "<<ans<<endl;
  return 0;
}
