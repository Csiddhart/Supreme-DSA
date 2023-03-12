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

  int precision; //number of floating number wanted
  cout<<"enter the number of floating digits in precision"<<endl;
  cin>>precision;

  double step =0.1;
  double finalans =ans;

  for(int i=0;i<precision;i++){   //this loop for adding number of digits
    for(double j=finalans;j*j<=n;j=j+step){   //ans found korchi
      finalans =j; //ans store korchi
    }
    step =step/10;
  }

  cout<<"final ans  "<<finalans<<endl;
  return 0;
}
