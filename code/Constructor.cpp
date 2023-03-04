/*Program definition: constructor */

#include <iostream>
using namespace std;
class test
{
    int a;
    int b;

public:
    test()
    {
        a = 5;
        b = 6;
    }
    
    int printdata();
};

int test::printdata()
{

    cout << a << endl
         << b;
}

int main()
{
    test obj1;
    obj1.printdata(); 
    return 0;
}