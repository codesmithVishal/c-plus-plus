/*Program definition: */

#include <iostream>
using namespace std;

class simple
{
    int data;
    int data1;
    int data2;

public:
    simple(int, int);
    simple(int);
    void printLine(); 
};

simple::simple(int a, int b)
{
    data =a; 
    data2= b;
}

simple::simple(int c)
{
    data1=c; 
}

void simple::printLine()
{
    //cout<<data<<endl<<data2<<endl<<data1;     
}
int main()
{
        simple a = simple(1,3);
        simple b(2); 
        a.printLine(); 
        b.printLine(); 
    return 0;
}