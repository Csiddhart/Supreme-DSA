#include<iostream>
#include <limits.h>
#include<vector>
using namespace std;
int main(){
    vector<int> a{1,2,3,3,4,5,6};
    vector<int> b{3,3,4,5,7,8,9};
    vector<int>ans;
    for(int i=0;i<a.size();i++){
        int element= a[i];
        for(int j=0;j<b.size();j++){
            if(element==b[j]){
                //mark
                b[j]=INT_MIN;
                ans.push_back(element);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}