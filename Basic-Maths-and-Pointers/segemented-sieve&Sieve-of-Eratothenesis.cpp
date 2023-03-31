//the code of sieve of eratothenesis and segmented sieve 
#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
vector<bool> Sieve(int n){
  //create a sieve array of N size telling it is prime 
  vector <bool> sieve(n+1,true);
  sieve[0] = sieve[1] = false;
  for(int i=2; i*i <= n; i++){  // optimization :-2
      if(sieve[i] == true ){
        int j= i*i; // optimization :- 1
        while(j<=n){
           sieve[j]= false;
           j+=i;
        }
      }
  }
  return sieve;
}

vector<bool> segSieve(int L, int R){
//get me prime array , i will use it to mark segmented sieve 
vector <bool> sieve = Sieve(sqrt(R));
vector <int> basePrime;
for(int i=0; i< sieve.size(); i++){
  if(sieve[i]){
    basePrime.push_back(i);
  }
}
vector<bool> segSieve(R-L+1,true );
if(L==0 || L== 1){
  segSieve[L]= false; 
}
for(auto prime: basePrime){
  int first_multiple = (L/prime)*prime;
  if(first_multiple<L){
    first_multiple+=prime;
  }
  int j= max(first_multiple,prime*prime);
  while(j<=R){
    segSieve[j-L]=false;
    j+= prime;
  }
}
return segSieve;
}

int main() {
  /*vector <bool> sieve= Sieve(25);
  for(int i=0;i<=25;i++){
    if(sieve[i]){
      cout<<i<<" ";
    }
  }*/

int L=110;
int R=130;
vector<bool> ss= segSieve(L,R);
for(int i=0;i<ss.size();i++){
  if(ss[i]){
    cout<<i+L<<" ";
  }
}
  return 0;
}
