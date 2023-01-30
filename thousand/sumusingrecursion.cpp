/* write a program to find sum using recursion
*/
#include<iostream>
using namespace std;

int sum(int num)
{   //int total =0;
    if(num <1 )
    {
        return 0;
    }
 return num + sum(num-1);
}
int main()
{
    int number, total;  
    cout<<"Enter any number :"<<endl; 
    cin>>number;
    total = sum(number);
    cout<<total;
    return 0;
}

