/*Program definition: Check wether the number is positive or negative  */

#include <iostream>
using namespace std;

int main()
{
    int number1;
    cout << "Enter any number: " << endl;
    cin >> number1;
    if (number1 < 0)
    {
        cout << number1 << "Number is negative" << endl;
    }
    else
    {
        cout << number1 << "Number is positive" << endl;
    }
    
    return 0;
}