/*Program definition: understandi9ng array */

#include <iostream>
using namespace std;

int main()
{

    int ele[4];
    int i;
    ele[0] = 1;
    ele[1] = 2;

    ele[2] = 3;
    ele[3] = 4;
    ele[4] = 5;
    for (i=0; i < 5; i++)
    {
        cout << "Array Element " << i << "Value " << ele[i] << endl;
    }
    i=0;
    while (i < 5)
    {
        cout << ele[i] << endl;
        i++;
    }

    return 0;
}