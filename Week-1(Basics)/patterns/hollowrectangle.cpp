#include<iostream>
using namespace std;
int main(){
    int rowcount;
    int columncount;
    cin>>rowcount;
    cin>>columncount;
    for(int i=0;i<rowcount;i++){
        if (i == 0 || i == rowcount-1)
        {
            for (int j = 0; j < columncount; j++)
            {
                cout << "*";
            }
        }
        else{
            cout<<"*";
            for(int j=0;j<columncount-2;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}