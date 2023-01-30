/* write a program to find the largest number among tree number 
    Logic:

    1: ask for input any 3 number
    2: check whether first number is largest or not 
    3: if not check second number is not 
    4: if not then eventually third number is largest

*/

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three number: "<<endl; 
    cin>>a>>b>>c;  
    if (a>b&&a>c)
    {
        cout<<a<< " is largest number";  5


    }else if(b>a && b>c) 
    {
        cout<<b<<" is larlgest number";
    }else
    {
        cout<<c<<" is largest number";
    }
return 0;
}   