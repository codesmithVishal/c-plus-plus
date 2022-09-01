//wrfite a program to practice function 

#include<iostream>
using namespace std;
int fun1(int ,char, int);
int main()
{
    int firstNumber, secondNumber;
    char expresion; 
    cout<<"Enter first number";
    cin>>firstNumber;
    cout <<"Enter Operator";
    cin>>expresion;
    cout<<"Enter second number";
    cin>>secondNumber;   
    
    fun1(/*firstNumber,*/ expresion, secondNumber);
    //cout<<z;
    return 0;
}  

int fun1(int a, char c, int b)
{
  
    switch (c)
    {
    case '+' : cout<<a+b;
        break;
    case '-' : cout<<a-b;
        break;
     case '*' : cout<<a*b;
        break;
     case '/' : cout<<a/b;
        break;    

    default: cout<<"error";
        break;
    }
}
