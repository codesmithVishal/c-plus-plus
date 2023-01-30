/*write a program to check whether  two number is equal or not.  
Logic : 
1. receive two number from  terminal
2. use relational operator == with if statement to check number is equal or not
 */

#include<iostream>
using namespace std;

int main()
{
    int number1, number2; 
    cout<<"Enter any two number : ";
    cin>> number1>>number2;
    if(number1==number2)
    {
        cout<<"number is equal";
    }
    else
    {
        cout<<"Number is not equal";
    }
    return 0;

}
