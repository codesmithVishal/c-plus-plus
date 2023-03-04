/*Program definition: Write a program to understand the working of static member 
Static membber inilized zero when 



*/

#include <iostream>
using namespace std;
class item
{
    static int count;
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void setdata()
    {
        cout << count << "\t" << number<<endl;
    }

};
int item::count;
int main()
{
    item a,b,c;
    a.getdata(1);
    a.setdata();
    b.getdata(100); 
    b.setdata();
    c.getdata(200); 
    c.setdata(); 

    return 0;
}