/*Program definition: */

#include <iostream>
using namespace std;

int main()
{
    int a[2][2];
    int i, j;

    // taking input
    cout << "Enter the element of first array" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    // o|p
    cout << "Here is 2X2 matrix" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout<< endl;
    }


    return 0;
}