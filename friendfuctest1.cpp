/*Program definition: */
#include <iostream>
using namespace std;
class sample
{
    int a;
    int b;
    public:
    int setvalue()
    {
        a =10; 
        b = 5; 
    } 
    friend int sum(sample);     
};
 int sum(sample s)
 {
    return s.a+s.b; 
 }

int main()
{
    sample s; 
    s.setvalue(); 
    cout<< sum(s); 
    return 0;
}