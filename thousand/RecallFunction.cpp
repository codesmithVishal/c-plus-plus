/*Program definition: */ 

#include<iostream>
using namespace std;

int addNumber(int, float);

int main() {
    addNumber(5,10.0);  
    //cout<<float(a)<<endl;  
return 0;
}

int addNumber(int a, float b)
{
    float c = a/float(b);
    cout<<c; 
    return 0;
}