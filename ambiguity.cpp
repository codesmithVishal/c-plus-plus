/*Program definition: */

#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "kem chho?" << endl;
    }
};

class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1::greet();
    }
};

int main()
{
   
   /* base1 a;
    a.greet();
    base2 d;
    d.greet();
    derived z;
    z.greet();
*/
    return 0;
}