/*Program definition: */

#include <iostream>
using namespace std;
class Employee
{
   int id;
   static int count; // Declare static variable;
public:
   void getdetail(void)
   {
      cout <<"Enter The Id";
      cin >> id;
      count++;
   }
   void putdata()
   {
      cout << "Employee" << count << "is" << id;
   }
};
int Employee::count; // Define static varieble
int main()
{
   Employee a;
   a.getdetail();
   a.putdata();
   a.getdetail();
   a.putdata();  
   a.getdetail();
   a.putdata(); 
   return 0;
}