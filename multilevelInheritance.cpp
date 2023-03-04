/*Program definition: */
#include <iostream>
using namespace std;
class student
{
protected:
    int rollNo;

public:
    int get_rollNo(int);
    void set_rollNo();
};
int student::get_rollNo(int number)
{
    rollNo = number;
}
void student::set_rollNo()
{
    cout << rollNo << endl;
}
class marks : public student
{
protected:
    float maths;
    float physics;

public:
    int set_mark(int m1, int m2);
    void display_mark();
};
int marks::set_mark(int m1, int m2)
{
    maths = m1;
    physics = m2;
}

void marks::display_mark()
{
    cout << "Maths =  " << maths << endl
         << "physics " << physics << endl;
}

class result : public marks
{
    int persentile;

public:
    float percentage()
    {
        persentile = (maths + physics) / 2;
    }
    void percentegfdata()
    {
        cout << endl
             << " Student roll No " << rollNo << " Maths : " << maths << " physic= " << physics <<" Percentage ="<< persentile << " % " <<endl; 
    }
};
int main()
{
    result s1;
    s1.get_rollNo(10);
    s1.set_rollNo();
    s1.set_mark(56.0,78.90);    
    s1.display_mark();
    s1.percentage();
    s1.percentegfdata();
    return 0;
}