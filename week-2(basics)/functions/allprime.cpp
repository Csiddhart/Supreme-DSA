#include <iostream>
using namespace std;

bool primeornot(int a)
{
    int i = 2;
    for (i = 2; i <= a - 1; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a;
    cin >> a;
    for(int i=1;i<=a;i++){
        bool ans = primeornot(i);
        if (ans == 1)
        {
            cout << "prime" << endl;
        }
        else
        {
            cout << "notprime" << endl;
        }
    }
}