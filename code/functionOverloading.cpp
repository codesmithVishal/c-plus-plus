/*Program definition: */ 
#include<iostream>
using namespace std;
#define pi 3.14
float area(int r)
{
    return pi*r*r; 
}

int area(int l, int b)
{
    return l*b; 
}
//
int main() {    
    cout<<area(1,2)<<endl;
    cout<<area(5);
return 0;
}