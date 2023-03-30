/*Program definition: 
Function overloading concept;
*/ 

#include<iostream>
using namespace std;

float addition(int a, int b, float c = 3.57); 

int main() {
    
cout<< addition(10, 15, 5); 
return 0;
}

float addition(int a, int b,float c  )
{
    return a*b*c; 
}