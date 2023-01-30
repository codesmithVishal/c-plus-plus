/* write a program to find the sum of digit from number using recursion  
for example  number 101 the 1+0+1 =  2
*/
#include<iostream>
using namespace std;  
int digitsum(int number)
{
    if(number ==0)
    {
        return 0;
    }
    return number% 10 + digitsum(number/10); 
}

int main()
{
    int number; 
    cout<<"Enter any number";  
    cin>>number;     
    int total= digitsum(number);
    cout<<total;     

}