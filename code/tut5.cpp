/*Program definition: */

#include <iostream>
using namespace std;

int main()
{
    int count = 10;ṇ
    for (int i = 0; i < count; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << endl;
    }

    for (int i = 0; i < count; i++)
    {
        if (i== 5 )
        {
            continue;
        }
        cout<<i<<"\t";
    }
    

    return 0;
}