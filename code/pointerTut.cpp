/*Program definition: */

#include <iostream>
using namespace std;

int main()
{
    int a;
    int *ptr;
    a = 5;
    ptr = &a;
    cout << a << "\t" << ptr << "\t" << *ptr; // & address of operator, * value at operator or dereferncing operator
    int list[]= {1,2,3,4,5}; 
    int *listpointer = list;
    for (int i=1; i <5; i++)
    {
    cout<<endl<<*listpointer; 
    listpointer++;  
    }

   
    return 0;
}