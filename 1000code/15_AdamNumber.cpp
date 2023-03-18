/*Program definition: The program takes a number and checks
if it is an Adam number. A number when squared, reversed,
its root is found and is reversed again is equal to the original number,
then it is called an Adam number
.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number" << endl;
    cin >> number;

    int numsqure = number * number;

    // reverse the addam number
    int temp, rev, mod;
    temp = numsqure;
    while (temp != 0)
    {
        mod = temp % 10;
        rev = rev * 10 + mod;
        temp /= 10;
    }

    int sqaureroot, rev2 = 0, mod2;
    sqaureroot = sqrt(rev);
    while (sqaureroot != 0)
    {
        mod2 = sqaureroot % 10;
        rev2 = rev2 * 10 + mod2;
        sqaureroot/=10; 
    }
    cout<<rev<<rev2<<endl;

    if(rev2==number)
    {
        cout<<"Nubmer is addam number";

    }
    else
    {
        cout<<"Number is not addam number"; 
    }
    return 0;
}