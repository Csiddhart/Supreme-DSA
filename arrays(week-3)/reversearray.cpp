#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int start = 0; // these are indexing,i.e.,initialing these with indexes
    int end = size - 1;
    while (start<=end)
    {
  swap(arr[start],arr[end]);
  start++;
  end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}