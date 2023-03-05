#include <iostream>
using namespace std;
int fastexp(int a,int b){
  int ans=1;
  while(b>0){
    if(b&1){
      ans=ans*a; //odd
    }
    a=a*a;
    b>>=1; //b=b/2
  }
  return ans;
}//t.c.:-o(logn)

int slowexponential(int a,int b){
  int ans=1;
  for(int i=0;i<b;i++){
    ans*=a;
  }
  return ans;
}//t.c.:-o(n)

int main() {
  cout << slowexponential(8,2) << endl;
  cout << fastexp(8,2) << endl;
  return 0;
}
