//2.5 write a program to convert fernhit into celcious
#include<iostream>
using namespace std;
int main()
{
    float farenhit;
    int celcious; 
    cout<<"Enter tempreture in ferenhit :  ";
    cin>> farenhit;

    celcious = (farenhit - 32)*5/9;

    cout<<"Temp in celcious : "<<celcious;




}