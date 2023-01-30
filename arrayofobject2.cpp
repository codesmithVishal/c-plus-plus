/*Program definition: */

#include <iostream>
using namespace std;
class employee
{
    int Id;
    int salary;

public:
    void getdata();
    void setdata();
};
void employee::getdata()
{
    cout << "Enter Employee ID:\n";
    cin >> Id;
    cout << "Enter Employee salary:\n";
    cin >> salary;
}

void employee::setdata()
{
    cout << "Employee"
         << Id << "Employee salary"<<salary
         << endl;
}

int main()
{
    employee f[3];
    for (int i = 1; i < 3; i++)
    {
        f[3].getdata();
        f[3].setdata();
    }
    return 0;
}