/*Program definition: */

#include <iostream>
using namespace std;

int main()
{
     int *aryptr;
    
    int a[10]; // No bound checking
    int num;
    for (int i = 0; i < 10; i++)
    {
        a[i] = i;
    }
   aryptr =a;

     for (int i = 0; i <10; i++)
    {
        cout<<*aryptr<<endl;
        *aryptr++;
    }
    cout << "Enter any number" << endl;

    cin >> num;
    // cout<<*aryptr<<endl;
    // Now checking number comparing array element
    for (int i = 0; i < 10; i++)
    {
        if (*aryptr == num)
        {
            cout << "\n"
                 << "num is present in array" << endl;
            break;
        }
        else if (i == 9)
        {
            cout << "number is not present in array" << endl;
        }
        *aryptr++;
    }
    
    return 0;
}
