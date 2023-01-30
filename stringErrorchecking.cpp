/*Program definition: */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;
    ptr = &a; // Value of patr and a changed;

    cout << a << endl;
    cout << ptr << endl;
    cout << *ptr << endl; 
    // Now change the value value of pate
    // You can change of value by * dereferencing operator 
    *ptr = *ptr + a;// Changing value of a
    cout<<*ptr<<endl
        // / Value after assining new value to ptr 
       <<"New value of a is :  "<< a;
        
    return (0);
}