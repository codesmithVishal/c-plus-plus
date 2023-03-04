/* Write a programq to understand working of actual argument and formal argument 

 call by value

*/

#include<iostream>
using namespace std;  

int func( int a)
{   
    cout<<"call by value"<<endl;
    a=a+21; // operation  variable 
    cout<<a<<endl;
    return a + 1;   
}

// Example call by reference 

int funct1(int *b)
{   
    cout<<"Call by reference "<<endl;
    *b= 5;
      
    return *b;
}

int main()
{
    int a,b; //actual varible
    cout<<"Enter any number: "<<endl;   
    cin>>a>>b; 
    int result, result1;
    result= func(a);

    result1 = funct1(&b); 
    cout<<"Call by value"<<endl;   
    cout<<result<<endl;
    cout<<"cal by refernce"<<endl; 
    cout<<result1<<endl;
    cout<<a<<endl; /*here you can see a is just passing to copy value of varible  to function  
    here you can see a is just passing to copy value of varible  to function so 
    so  change value in function does not effect to actual variable */
    cout<<b<<endl; /* Change in value by changing in fuction because we have passed address of variable */

    return 0;
}