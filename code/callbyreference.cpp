/*Program definition: */ 

#include<iostream>
using namespace std;
int simpleFunction(int a, int b)
{
    int c= a+b; 
    return c;
} 

// swap by pointer reference; 
void swapbypointer (int *a, int *b)
{
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
}

// swap by reference
int swapbyreference(int &a, int&b)
{
    int temp; 
    temp =a;
    a=b; 
    b = temp;  

}

int main() {
int a=5,b=6; 
int c = simpleFunction(a,b); 
cout<<c<<endl;
swapbypointer(&a, &b); 
cout<<a<<" "<<b<<endl; 
swapbyreference(a,b); 
cout<<a<< " "<<b;

return 0;
}