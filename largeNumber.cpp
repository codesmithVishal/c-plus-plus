/* 2.2write a program to  accept two number from user and print largest number on terminal  */
#include<iostream>
#include<cctype>
using namespace std;

int main()
{   
    int number1, number2;
    cout<<"Enter the first number ";
    cin>>number1;
    cout<<"Enter the  second number ";
    cin>>number2;
    
        if(number1>number2)
        {
            cout<<number1<<" is largest "<<endl;

        }else
        {
            cout<<number2<<" is largest"<<endl;
        }
    
    return 0;
}

