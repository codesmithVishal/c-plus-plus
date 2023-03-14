/*Program definition: */

#include <iostream>
using namespace std;
template <class T1, class T2>
class myclass
{
public:
    int data1;
    float data2;
    myclass(int data1, float data2)
    {
        data1 = data1;
        data2 = data2;
    }
    void display()
    {
        cout <<this->data1 <<"\t"<<this->data2 << endl;
    }
};
int main()
{   myclass <int, float> obj(1,1.4);  
    obj.display(); 

    return 0;
}