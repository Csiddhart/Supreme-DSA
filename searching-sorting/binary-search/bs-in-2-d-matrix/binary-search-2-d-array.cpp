#include <iostream>
using namespace std;

bool binarysearch(int arr[][4],int row,int col,int target){
int totalsize=row*col;
int s=0;
int e= totalsize -1;
int mid=s+(e-s)/2;
while(s<=e){
  int rowindex=mid/col;
  int colindex=mid%col;
  int element =arr[rowindex][colindex];
  if(element ==target){
    cout<<"found at "<<rowindex <<" "<<colindex<<endl;
    return true;
  }else if(element>target){
        e=mid-1;
  }else{
    s=mid+1;
  }
  mid=s+(e-s)/2;
}
return false;
}

int main() {
int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
int row=5;
int col =4;
int target =19;
bool ans=binarysearch(arr,row,col,target);
if(ans){
  cout<<"found"<<endl;
}else{
  cout<<"not found"<<endl;
}

  return 0;
}
