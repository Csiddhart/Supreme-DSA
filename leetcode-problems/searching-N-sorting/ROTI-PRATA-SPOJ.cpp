#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int ispossible(vector<int>cooksranks,int np,int mid){
  int currp=0;  //initial cooked prata count 
  for(int i=0;i<cooksranks.size();i++){
    int r =cooksranks[i],j=1;
    int timetaken =0;
    while(true){
      if (timetaken+j*r<=mid){
        ++currp;
        timetaken+=j*r;
        ++j;
      }else{
        break;
      }
    }
    if(currp>=np){
      return true;
    }
  }
  return false;
}

int mintimetocompleteorder(vector<int>cooksranks,int np){
  int start =0;
  int highestrank = *max_element(cooksranks.begin(),cooksranks.end());
  int end = highestrank*(np*(np+1)/2);
  int ans =-1;

  while(start<=end){
    int mid = (start+end)>>1;
    if(ispossible(cooksranks,np,mid)){
      ans=mid;
      end=mid-1;
    }else{
      start=mid+1;
    }
  }
  return ans;
}

int main() {
  int t ;
  cin>>t;
  while(t--){
    int np,nc;
    cin>>np>>nc;
    vector<int>cooksranks;
    while(nc--){
      int r;
      cin>>r;
      cooksranks.push_back(r);
    }
    cout<<mintimetocompleteorder(cooksranks,np)<<endl;
  }
  return 0;
}
