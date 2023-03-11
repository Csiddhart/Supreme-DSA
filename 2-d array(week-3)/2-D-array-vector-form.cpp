#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<vector<int> >arr; 
  vector<int> a{1,2,3};
  vector<int>b{4,5,6};
  vector<int> c{7,8,9};

  arr.push_back(a);
  arr.push_back(b);
  arr.push_back(c);
  for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[0].size();j++){  //when have same number of columns
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  int row=5;
  int col=5;
vector<vector<int> > arr1(row,vector<int>(col,-8));
  for(int i=0;i<arr1.size();i++){
    for(int j=0;j<arr1[i].size();j++){   //when have different number columns
      cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
