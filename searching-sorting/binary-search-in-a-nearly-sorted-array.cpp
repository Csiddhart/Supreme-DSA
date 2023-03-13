#include <iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>arr,int target){
  int s = 0;
  int e = arr.size()-1;
  int mid=s+(e-s)/2;
  while(s<=e){
    if(arr[mid]==target){
      return mid;
    }
    if(mid>=0 && arr[mid-1]==target){                         // ekhane dekhe nebo j mid-1 ta -ve hocche nah toh
      return mid-1;
    }
    if(mid+1<arr.size() && arr[mid+1]==target){              // ekhane dekhe nebo j mid+1 ta out of bound chole jacche nah toh
      return mid+1;
    }

    if(target>arr[mid]){
      s=mid+2;                                               //right search
    }else{
      e=mid-2;                                               //left search
    }
    mid=s+(e-s)/2;
  }
  return -1;
}

int main() {
  vector<int>arr{10,3,40,50,60,80};
  int target =80;

  int ans= binarysearch(arr,target);
  cout<<"ans is "<<ans<<endl;
  
  
  
  
  //optimized one
  
  
  #include <iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>arr,int target){
  int s = 0;
  int e = arr.size()-1;
  int mid=s+(e-s)/2;
  while(s<=e){
    if(arr[mid]==target){
      return mid;
    }
    if(mid>=s && arr[mid-1]==target){// ekhane dekhe nebo j mid-1 ta -ve hocche nah toh
      return mid-1;
    }
    if(mid+1<=e && arr[mid+1]==target){// ekhane dekhe nebo j mid+1 ta out of bound chole jacche nah toh
      return mid+1;
    }

    if(target>arr[mid]){
      s=mid+2;  //right search
    }else{
      e=mid-2;   //left search
    }
    mid=s+(e-s)/2;
  }
  return -1;
}

int main() { 
  vector<int>arr{10,3,40,50,60,80};
  int target =80;

  int ans= binarysearch(arr,target);
  cout<<"ans is "<<ans<<endl;
  return 0;

}
  return 0;

}
