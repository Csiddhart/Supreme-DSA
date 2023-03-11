#include <iostream>
#include<vector>
using namespace std;
void waveprintmatrix(vector<vector<int> >v){
  int start=0;
  for(int startcol=0;startcol<v[start].size();startcol++){
    //even number of col -> top to bottom 
    if((startcol & 1)==0){
      for(int i=0;i<v.size();i++){
        cout<<v[i][startcol]<<" ";
      }
    }
    else{
      for(int i=v.size()-1;i>=0;i--){
        cout<<v[i][startcol]<<" ";
      }
    }
  }
}
int main() {
    vector<vector<int> >v{
      {1,2,3},
      {4,5,6},
      {7,8,9},
      {10,11,12}
    };
    waveprintmatrix(v);
  return 0;
}
