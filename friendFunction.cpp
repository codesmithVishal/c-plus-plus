/*Program definition: */

#include <iostream>
using namespace std;
//complex sumcomplex(complex o1, complex o2);
class complex
{
    int a; 
    int b; 

public:
    friend complex sumcomplex(complex o1, complex o2);
    int setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printData()
    {
        cout<<a<< " + "<< b<<"i"<<endl;
    }
};


complex sumcomplex(complex o1, complex o2)
{    complex o3; 

    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex d1,d2,sum;
    
    d1.setdata(1,2);
    d1.printData();
    //---------------------
    d2.setdata(1,2); 
    d2.printData();

    sum = sumcomplex(d1,d2); 
    //cout<<sum; 
    return 0;
}