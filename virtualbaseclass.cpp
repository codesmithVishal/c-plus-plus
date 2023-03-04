/*Program definition: */

#include <iostream>
using namespace std;
class student
{
protected:
    int rollNo;

public:
    void set_rollNo(int a)
    {
        rollNo = a;
    }
    void printRollNo()
    {
        cout << "Roll No is: " << rollNo << endl;
    }
};

class subject : virtual public student
{
protected:
    int maths, physics;

public:
    int set_marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void printMarks()
    {
        cout << "Maths Marks: " << maths << endl;
        cout << "physics Marks:" << physics << endl;
    }
};

class sport : virtual public student
{
protected:
    int score;

public:
    int set_score(int s)
    {
        score = s;
    }

    void printScore()
    {
        cout << "Sport score =  " << score<<endl;
    }
};

class result : public subject, public sport
{
protected:
    int total;

public:
    void show()
    {
        total = maths + physics + score;

        printRollNo();
        printMarks();
        printScore();
        cout << "Roll No is: " << rollNo << " Toral mark: " << total << endl;
    }
};
int main()
{

result Obj;
Obj.set_rollNo(10);
Obj.set_marks(50,100);
Obj.set_score(78);
Obj.show(); 
    return 0;
}