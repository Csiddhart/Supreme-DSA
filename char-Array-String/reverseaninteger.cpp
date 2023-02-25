#include <iostream>
#include <string.h>
using namespace std;

int getlength(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

int reverseCharArray(char name[]){
int i=0;
int n= getlength(name);
int j= n-1;
while (i<=j)
{
    swap(name[i],name[j]);
    i++;
    j--;
}
}

int main(){
char name[100];
cin >> name;
cout << "length " << getlength(name) << endl;
cout<<"initially "<<name<<endl;
reverseCharArray(name);
cout<<"after reversing "<<name<<endl;
return 0;
}