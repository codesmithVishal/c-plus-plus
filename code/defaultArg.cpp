/*Program definition: */ 

#include<iostream>
using namespace std;
int account(int a, int  b =10)
{
    return a*b;
}

int main() 
{    
int c =  account(5);   
cout<<c; 
return 0;
}

