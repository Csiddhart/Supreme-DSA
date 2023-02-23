#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[]={2,1,4,6,5,8,7,9,52,65,45};
    int size= 11;
    int maxi= INT_MIN ; //initialing maxi with least possible integer 
    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout<<"maximum number is"<<maxi<<endl;
}