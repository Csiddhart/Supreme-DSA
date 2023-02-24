#include <iostream>
#include <vector>
using namespace std;
int main()
{int sum=9;
    vector<int> a{1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < a.size(); i++)
    {
        int element = a[i];
        for (int j = i + 1; j < a.size(); j++)
        {
            if(element + a[j]==sum){
                cout<<element<<','<<a[j]<<endl;
            }
        }
    }
    return 0;
}