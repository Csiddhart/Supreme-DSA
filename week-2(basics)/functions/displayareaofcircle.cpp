#include<iostream>
using namespace std;

float areacircle(float radius){
    float area=3.14*radius*radius;
    return area;
}

int main(){
float radius;
cin>>radius;
float area = areacircle(radius);
cout<<area<<endl;
}