#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {2, 1, 4, 6, 5, 8, 7, 9, 52, 65, 45};
    int size = 11;
    int mini = INT_MAX; // initialing mINi with GREATEST possible integer
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    cout << "maximum number is" << mini << endl;
}