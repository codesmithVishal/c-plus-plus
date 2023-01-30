/*Program definition: write a program to check wether number is number is prime or not */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter amy number: " << endl;
    cin >> num;
    int flag;
    for (int i = 2; i < num; i++)
    {
        if (num % i != 0)
        {
            flag=   1; 
        }
        else
        {
            flag =0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"nuber is prime"; 
    }
    else{
        cout<<"nuber is not prime"; 

    }
    return 0;
}