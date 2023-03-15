/*Program definition: */

#include <iostream>
using namespace std;

int main()
{
    int number1, value;
    cout << "Enter any number: " << endl;
    cin >> number1;
    value = number1;
    int sum = 0;
    while (number1 != 0)
    {
        sum = sum + (number1 % 10);
        number1 = number1 / 10;
    }
    cout << sum << " " << value;
    return 0;
}