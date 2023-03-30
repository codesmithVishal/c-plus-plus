/*Program definition: Write a program to check wether year is */

#include <iostream>
using namespace std;
int main()
{
    int year;
    cout <<"Enter the leap year"<< endl;
    cin >> year;
    if (year % 4 == 0)
    {
        cout << year << " Year is leap year: " << endl;
    }
    else
    {
        cout << " Not leap year";
    }

    return 0;
}