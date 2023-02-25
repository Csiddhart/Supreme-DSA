#include <iostream>
#include <string.h>
using namespace std;

void replacespace(char sentences[]){
    int i=0;
    int n=strlen(sentences);
    for(int i=0;i<n;i++){
if(sentences[i]==' '){
    sentences[i]='@';
}
    }
}
int main(){
    char sentences[100];
    cin.getline(sentences,100);
    replacespace(sentences);
cout<<"printing sentences"<<endl<<sentences<<endl;
return 0;
}