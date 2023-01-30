/*Program definition: Understand pointer in CPP*/

#include <iostream>
using namespace std;

int main()
{
    int a; // Before declare pointer must declare normal variable
    int *ptr;
    ptr = &a; // & is address of a operator
    a = 10;
    int **ptr1 =  &ptr; 
    cout<<a<<endl; 
    cout<<&a<<endl; 
    cout<<*ptr<<endl; 
    cout<<ptr<<endl;
    cout<<**ptr1<<endl;
    return 0;
}
