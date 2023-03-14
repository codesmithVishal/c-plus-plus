/*Program definition: */

#include <iostream>
using namespace std;
template <class T1, class T2>
class myclass
{
public:
    int data1;
    float data2;
    myclass(int a, float b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << this->data2 << endl;
    }
};
int main()
{   myclass <int, float> obj(1,1.4);  
    obj.display(); 

    return 0;
}