/* write a program to get the sum of even and odd number

Logic -
 1. check whether number is even or odd using modulo operator.
 2. After getting number is odd or even add number in to respective sum
 3. print result

*/
#include <iostream>
using namespace std;

int main()
{
    int number, flag, sumodd = 0, sumeven = 0;
    cout << "Enter any nuber :  " << endl;
    cin >> number;
    for (int i = 1; i <=number; i++)
    {
        if (i % 2 != 0)
        {

            sumodd = sumodd + i;
            flag = 0;
        }
        else
        {

            sumeven = sumeven + i;
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "number is odd number.." << endl;
    }
    else
    {
        cout << "Number is even number.." << endl;
    }

    cout<<sumeven<<endl;
    cout<<sumodd<<endl; 
    return 0;
}

// working perfect