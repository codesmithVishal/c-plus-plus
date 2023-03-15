/*Program definition: */

#include <iostream>
using namespace std;
class simple
{

    int data1;
    int data2;

public:
    void setvalue(int &a, int &b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 << " " << data2 << endl;
    }
};

int main()
{ 
    int x =  5, y  =6; 
    simple *ptr =  new simple;  
    ptr->setvalue(x, y); 
    ptr->display();
    delete ptr;
   // ptr->setvalue(x, y); 
   // ptr ->display(); 

    return 0;
}