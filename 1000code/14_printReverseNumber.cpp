/*Program definition: */

#include <iostream>
using namespace std;

int main()
{
    int num1, temp, reverse = 0;
    cout << "Enter any numbe: " << endl;
    cin >> num1;
    int r;
    temp = num1;
    while (temp != 0)
    {
        r = temp % 10;
        reverse = reverse * 10 + r;
        temp = temp / 10;
    }
    cout << "revere number" << reverse << endl;
    return 0;
}
