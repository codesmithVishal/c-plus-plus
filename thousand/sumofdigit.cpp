/* write a program to find of sum of digit
1. take any digit 
2. run for loop and save number into variable
*/
#include<iostream>
using namespace std;

int main()
{
    int sum=0, number;
    number =10;
    
    for(int i=0; i<=number; i++)
    {
        sum = sum + i;
    } 
    cout<<sum;

    return 0;
}
 


