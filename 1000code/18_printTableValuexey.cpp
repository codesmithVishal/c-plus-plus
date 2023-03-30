/*Program definition:
Write an programm to print a table of values of the function
------------------------------------------
 for x variying from 0 to 10 in step 0.1 */

#include <iostream>
using namespace std;

int main()
{
    float e;
    int x;
    float y;
    
    for (x = 0; x < 5; x++)
    {
            for(e = 0.1; e <1; e = e + 0.1)
        {
            y = e/x;
            cout<< y <<"\t | ";

        }
        cout<<endl<<endl;
    }
    return 0;
}