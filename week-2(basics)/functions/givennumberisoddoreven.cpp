#include<iostream>
using namespace std;

bool evenodd(int n){
    if(n%2==0){
        return true;
    }else{
        return false;
    }
}

int main(){
int n;
cin>>n;
bool output = evenodd(n);
if (output==1){
    cout<<n<<"is even.\n"<<endl;
}else{
    cout<<n<<"is odd.\n"<<endl;
}
}