/*Program definition:
An electrycityboard charges following rate to dometic user
to discourage large large consuption of energy

*/

#include <iostream>
using namespace std;
int function1()
{
    
}

int main()
{
    int min = 50;
    int totalunit;
    string name;

    float a, b, c;
    cout << "Enter the name and unit of user " << endl;
    cin >> name >> name;
    int i, sum1 = 0, sum2 = 0, sum3 = 0;

    if (totalunit > 300)
    {
        int tempunit = totalunit - 300;
        sum1 = tempunit * 90;
    }

    if (totalunit > 100 && totalunit < 300)
    {

        int tempunit = totalunit - 200;
        sum1 = tempunit * 80;
    }
    if (totalunit > 0 && totalunit < 100)
    {
        int tempunit;
        sum1 = tempunit * 80;
    }

    return 0;
}