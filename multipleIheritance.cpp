/*Program definition: understanding of multiple inheritance*/

#include <iostream>
using namespace std;
class base1
{   protected:
    int base1int; 
    public:
    int set_base1(int);
};

int base1::set_base1(int value1)
{
    base1int = value1;      
}

class base2
{
    protected:  
    int  base2int; 

    public:  
    int set_base2(int);
}; 

int base2::set_base2(int value1)
{
    base2int =  value1;  
}


class  derived1: public base1, public base2
{
    public: 
    void  showBase()
    {
        cout<<"Value 1 : "<< base1int<<" Value 2 :"<<base2int; 
    }
}; 

 // driver function main function 
 // create object
int main()
{ 
    derived1 obj1; 
    obj1.set_base1(19); 
    obj1.set_base2(20); 
    obj1.showBase(); 

    return 0;
}