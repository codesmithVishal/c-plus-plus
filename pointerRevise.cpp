/*Program definition:  Write a program to understand working and syntax of pointer 
    =>Pointer is a varible which point out the aaddress of another variable
    => '&' = address of  operator (reteun the adress of memory)
    => '* ' = dereferencing operator. ( Value at)
    => New key word  =  use for create dynamic object 
    => Delete keyword =  use to delete object created by new operator 


    
    */ 

#include<iostream>
using namespace std;

int main() {
    
    int a; 
    int *s = &a; 
    a =10; 

    cout<<"Value of  a is : "<<a<<endl; 
    cout<<"Value of s is : "<<s<<endl; 
    cout<<"Value of s is : "<<*s<<endl; 

// New opertor
// New keyword use with pointer (*ptr)
// Syntax   data-type {pointer} =  new datatype(value )
// New Keyword is use for  allocate memory dynamically 
// 
int *ptr =  new int(5);
cout<<"Value of pointe is: : "<<*ptr<<endl; 
cout<<"size of operator "<<sizeof(ptr)<<endl; 

//Dynamic array 
//syntax: data-type *{ array name} =  new {data-type}[3]
int *arr = new int[3]; 
    arr[0]= 10;
    arr[1]= 5;
    arr[3]= 6;

cout<<"Value of array  arr[0]: "<<arr[0]<<endl; 
cout<<"Value of array arr[1]: "<<arr[1]<<endl; 
cout<<"Value of array arr[2]: "<<arr[2]<<endl;
    //cout<<""<<; 
return 0;
}