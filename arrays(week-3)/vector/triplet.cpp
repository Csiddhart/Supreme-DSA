#include <iostream>
#include <vector>
using namespace std;
int main()
{ int sum=18;
    vector<int> a{1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < a.size(); i++)
    {
        int element = a[i];
        for (int j = i + 1; j < a.size(); j++)
        {
           int inner=a[j];
        for(int k=j+1;k<a.size();k++){
            if(element+inner+a[k]==sum){
                cout<<element<<","<<inner<<","<<a[k]<<endl;
            }
        }
        }
    }
    return 0;
}