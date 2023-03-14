/*Program definition:
initialization list special syntax

    consructor {argument- list}: initializaton - section
    {

        assignment and other code;

    }
 */

#include <iostream>
using namespace std;
class test
{
    int a;
    int b;

public:
    test(int x, int y, int n) : a(x), b(y)
    {

        cout << "Constructor executed" << endl;
        cout << "Value of a is : " << a << endl;
        cout << "Value of b is :" << b << endl;
    }
};
int main()
{
    test obj(1, 3,4);

    return 0;
}