/* wite a program to  check whether number is odd or even. 

logic -  if you divide number with 2 and reminder is 0 than number is even otherwise number is odd

number%2==0
*/
 
#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter any nuber :  "<<endl; 
    cin>>number; 
    if (number% 2==0)
    {
        cout<<"Number is even number.."<<endl;

    }else
    {
        cout<<"number is odd number.."<<endl;
    }
    return 0;

}

