/* write a program to swap two number 
Logic : 
1. first save value in two number and then declare third varible; 
2. asign first valu in third variable 
3. store second valu in first variable
4 now asign third varible value into second varible. 
 */

#include<iostream>
using namespace std; 

int main()
{
    int a, b; 
    cout<<"Enter 2 number : "<<endl;
    cin>>a>>b; 
    cout<<"a is : "<<a<<" and "<<"b is : "<<b<<endl;
    int temp =a; 
    a = b; 
    b = temp;
    cout<<"a is : "<<a<<" and "<<"b is : "<<b<<endl;
    return 0;
}