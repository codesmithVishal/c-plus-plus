/*Program definition: write a program to understand pointer 
pointer is a one kind of varible which is store adress of another variable
& - understanding of address of operator 
*P - declaration of pointer 
* - value at operator (dereference operator)
 */
#include<iostream>
using namespace std;

void printline()
{
    cout<<"---------------------"<<endl;
}

int main() {
    int a,b; 

    b = 1;
    a = 10; 
    int *p,*q; 
    p = &a;
    q =&b;
    
    
    cout<<"a ="<<a<<endl; // Simple variable 
    printline(); 
    cout<<"pointer to *p: "<<*p<<endl;  //pointer variable 
    printline(); 
    cout<<"Address of a : "<<&a<<endl; 
    printline(); 
    cout<<"Adress of *p : "<<&p<<endl;     
    printline(); 
    cout<<"Adress of ++ *p = "<<++*p<<endl;     
    printline(); 
    cout<<"Adress of ++(*p) = "<<++(*p)<<endl;     
    printline(); 
    cout<<"Adress of (*p)++ = "<<(*p)++<<endl;     
    printline(); 
    cout<<"Adress of *p = "<< *p<<endl;     
    printline(); 
    cout<<"Adress of *q = "<< *q<<endl;     
    printline(); 



return 0;
}