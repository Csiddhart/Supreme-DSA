#include <iostream>
using namespace std;
int main()
{
    for(int i=0;i<6;i++){
        for(int j=0;j<6-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}