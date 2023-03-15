/*Program definition: */

#include <iostream>
using namespace std;
template <class T>
class day
{ 
    T totalday;

public:
    void setvalue(T value1)
    {
        totalday = value1;
    }

    void calculate()
    {
        int month, day;
        month = totalday / 30;
        day = totalday % 30;
        cout << month << " month  and day is: " << day << endl;
    }
};

int main()
{
    day<int> d1;
    d1.setvalue(61);
    d1.calculate();
    return 0;
}