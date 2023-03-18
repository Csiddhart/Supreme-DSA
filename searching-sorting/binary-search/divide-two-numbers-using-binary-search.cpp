// this is only for +ve numbers

#include <iostream>
using namespace std;

int solve(int dividend, int divisor){
  int s=divisor;
  int e=dividend;
  int answer=0;
  int mid = s+(e-s)/2;
  while(s<=e){

    //perfect case
    if(mid*divisor==dividend){
      return mid;
    }

    //not perfect case 
    if(mid*divisor>dividend){
      //left search 
      e =mid-1;
    }else{
      //ans store
      answer =mid;
      s= mid+1;
    }

    mid = s+(e-s)/2;
  }
  return answer;
}

int main() {
  int dividend=36;
  int divisor = 6;
  int ans = solve(dividend,divisor);
  cout<< "ans is "<<ans<<endl;
  return 0;
}


//now for both +ve and -ve 

#include <iostream>
using namespace std;

int solve(int dividend, int divisor){
  int s=divisor;
  int e=abs(dividend);
  int answer=0;
  int mid = s+(e-s)/2;
  while(s<=e){

    //perfect case
    if(abs(mid*divisor)==abs(dividend)){
      answer= mid;
      break;
    }

    //not perfect case 
    if(abs(mid*divisor)>abs(dividend)){
      //left search 
      e =mid-1;
    }else{
      //ans store
      answer =mid;
      s= mid+1;
    }

    mid = s+(e-s)/2;
  }

  if((divisor<0 && dividend<0)||(divisor>0 && dividend>0)){
    return answer;
  }
  else{
    return -answer;
  }
}

int main() {
  int dividend= -15;
  int divisor = 3;
  int ans = solve(dividend,divisor);
  cout<< "ans is "<<ans<<endl;
  return 0;
}  


//ebar edge case aasbe j infinity print koro ba onno kichu tokhun ota k if-else condition diye handel kore nebo  
//just aak look out koro -21,7   ba   -12,4   aayi ram testcases gulo k  
