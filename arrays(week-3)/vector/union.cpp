#include<iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main(){
int arr[]={1,3,4,5,6,7};
int sizearr=6;
int brr[]={2,3,4,8,9};
int sizebrr=5;
vector<int>ans;
//pushing first array
for(int i=0;i<sizearr;i++){
    ans.push_back(arr[i]);
}
//pushing second array
for (int i = 0; i < sizebrr; i++)
{
    ans.push_back(brr[i]);
}

//printing
for(int i=0;i<ans.size();i++){
cout<<ans[i]<<" ";
}
}