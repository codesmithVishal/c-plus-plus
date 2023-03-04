/*Program definition:
 For operator overloading you need special operator function
 return-type class-name::operator op(arglist)
 {

    Function- body task defined
 }

*/

#include <iostream>
using namespace std;
class space
{
    int x;
    int y;
    int z;

public:
    void getdata(int a, int b, int c);
    void display(void);
    void operator*();
};
void space::getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

void space::display(void)
{
    cout<<"X= "<<x<<" ";
    cout<<"X = "<<y<<" ";
    cout<<"Z = " <<z<<"\n";    
}

void space::operator *()
{
    x =   x;
    y = y;
    z = z;
}

int main()
{
    space  s;  
    s.getdata(12,42,34); 
    s.display(); 
    * s; 
    s.display(); 
    

    return 0;
}