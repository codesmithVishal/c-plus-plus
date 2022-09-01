#include<iostream>
using namespace std; 

int value(int a, int b , float c =10 );
int main()
{
    int a,b,num;
    cout<<"Enter any two value";
    cin>>a>>b;
    num  = value(a,a);
    cout<<num;
}

int value(int a, int b, float c)
{

    return a+b+c;
}


