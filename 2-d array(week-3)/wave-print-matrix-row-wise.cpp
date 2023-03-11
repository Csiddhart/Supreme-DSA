#include <iostream>
#include <vector>
using namespace std;
void waveprintmatrix(vector<vector<int> >v){
  for(int i=0;i<v.size();i++){
    if((i&1)==0){
      for(int startcol=0;startcol<v[0].size();startcol++){
        cout<<v[i][startcol]<<" ";
      }
    }
    else{
      for(int startcol=v[0].size()-1;startcol>=0;startcol--){
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
