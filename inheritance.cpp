/*Program definition:
 inheritnace:
    => acquire the property of base class.
    => you can acuire the property of base class public and private and protected.
    => You can inherit class in three mode public, private and protected.
    => When its derived publicly, public member of  remain public in  derived class, and private
    menber of base class
    => private member of class can never be derived in any mode;
 */

#include <iostream>
using namespace std;

class base
{
   int data1;
   int data2;

public:
   int data3;
   void setdata();
   int getdata();
   void display();
};
void base::setdata()
{
   data1 = 25;
   data2 = 10;
   data3 = 5;
}
int base::getdata()
{
   return data1;
}

void base::display()
{
   cout << data1 << " " << data2 << " " << data3;
}

class derived : public base
{

   int dataNew;

public:
   int procces();
   void showProcess();
};

int derived::procces()
{
   dataNew = data3 * getdata();
}

void derived::showProcess()
{
   cout<<endl<<dataNew; 
} 

int main()
{
   derived obj; 
   obj.setdata(); 
   obj.getdata();
   obj.procces(); 
   obj.display();
   obj.showProcess(); 
   return 0;
}