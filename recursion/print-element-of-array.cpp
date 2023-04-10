#include<iostream>
using namespace std;
void printArrayElements(int arr[],int i,int size){
    // Base Case
    if(i == size)
        return;
    // Processing (one case done)
    cout<<arr[i]<<" ";
    // Recursive Relation (baki recursion samle nebe)
    printArrayElements(arr,i+1,size);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int i = 0;
    printArrayElements(arr,i,size);
    return 0;
}
