/*Program definition: */

#include <iostream>
using namespace std;
class employee
{
    int id;

public:
    int salary;
    void setdata();
    int getdata1();
};

class programmer : public employee
{
    int dayofmonth;

public:
    int setDay();
    int coutSalary();
};
void employee::setdata()
{
    id = 10;
    salary = 1000;
}
int employee::getdata1()
{
    return id;
}

int programmer::setDay()
{
    dayofmonth = 25;
}
int programmer::coutSalary()
{
    int totalsalary;
    totalsalary = salary * dayofmonth;
    return totalsalary;
}

int main()
{
    programmer ob1;
    ob1.setdata(); 
    ob1.setDay(); 
    ob1.coutSalary();
    cout<<ob1.coutSalary(); 
    // employee obj1;
    //  obj1.setdata();
    //  cout<<obj1.salary<<endl;
    cout<< "Run succesfully"; 
    return 0;
}
