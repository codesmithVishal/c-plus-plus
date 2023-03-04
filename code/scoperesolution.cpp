//write a program to acees scope resolution operator
#include<iostream>
using namespace std; 
int a =5;

int main()
{
    int a = 10;
     
     if(a=10)
     {
        int a =20;
            cout<<"Inner a = "<<a<<endl;
            cout<<":: a ="<<::a<<endl;
     }
     cout<<"a is "<<a<<endl;
     cout<<"::a is "<<::a;




}
