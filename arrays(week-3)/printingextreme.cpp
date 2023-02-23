#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    int start=0; //these are indexing,i.e.,initialing these with indexes
    int end=size-1;
    while(true){
        if(start>end){
            break; 
        }
        if(start==end){
            cout<<arr[start]; //jokhun odd array thaakbe 
        }
        else{
            cout << arr[start] << " "; //jokhun even array thaakbe 
            cout << arr[end] << " ";
        }
        start++; //bariye dao
        end--; //komiye dao
    }
    return 0;
}