/* write a program to understand pointer to pointer 

+ pointer is kind of variable which store the address of another variable
+ & address of operator 
+ *dedreference operator(value at operator) 

*/
#include<iostream>
using namespace std;  

int main()
{
    int a;                                  //simple variable
    a =100;                                 // intialization simple variable;  
    int *p;                                 // pointer variable  
    p= &a;                                  //initialization of pointer variable;   
    int **q= &p;                              //pointer to pointer 
    **q= 10;
    cout<<*(*q)<<endl;
    
    cout<<p<<endl;                          //O/P
    cout<<p+1<<endl;                          //O/P
    cout<<*p<<endl;                         // Pointer output
    cout<<*p+1<<endl;                         // Pointer output
    cout<<*(p+1)<<endl;                         // Pointer output
    return 0;

}