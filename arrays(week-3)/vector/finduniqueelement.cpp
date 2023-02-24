#include<iostream>
#include<vector>
using namespace std; 

int Unique(vector<int>arr){
int ans=0;
for(int i=0; i<arr.size();i++){
    ans=ans^arr[i];
}
return ans;
}

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the element of array"<<" "<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int findunique=Unique(arr);
    cout<<"the unqiue element is:- "<< findunique<<endl;
}