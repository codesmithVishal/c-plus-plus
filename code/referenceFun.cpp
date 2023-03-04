// write a code  to learn pass by reference.  
#include<iostream>
using namespace std;

int fun(int *, int *);
int main()
{   
 


//no name 

    int a,b,c;     
    cout<<"Enter any two value: "<<endl;
    cin>>a>>b;
    c=  fun(&a,&b);
    cout<<"Value is "<<c<<endl;
}

int fun(int *a, int *b)
{  
    return *a + *b;
}