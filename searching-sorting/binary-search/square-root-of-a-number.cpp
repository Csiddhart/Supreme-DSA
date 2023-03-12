#include <iostream>
using namespace std;

int findsqrt(int n){
  int target=n;
  int s=0;
  int e=n;
  int mid= s+(e-s)/2;
  int ans =-1;
  while(s<=e){
    if(mid*mid==target){
      return mid;
    }else if(mid*mid>target){
      //left search
      e=mid-1;
    }else{
      //ans store
      ans= mid;
      //right search
      s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}

int main() {
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;
  int ans = findsqrt(n);
  cout<<"ans "<<ans<<endl; 
  return 0;
}
