/*Program definition: prime number not  divisible by any nuber */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any one number:  " << endl;
    cin >> num;
    // char message[50] = "Not  a prime number:";
    int flag = 0;
    for (int i = 2; i < num; i++)
    {

        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "number is not prime number" << endl;
    }
    else
    {
        cout << "number is prime number" << endl;
    }
    return 0;
}