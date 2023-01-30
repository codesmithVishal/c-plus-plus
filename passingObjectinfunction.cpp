/*Program definition: */ 

#include<iostream>
using namespace std;
class employee
{ 
    int a; 
    int b;
    public:
    int getData(int V1,int V2)
    {
        a=V1; 
        b=V2; 
    }
    int setdata(employee a1, employee b1)
    {
        a = a1.a + b1.a;
        b= a1.b + b1.b; 
        cout<<a <<" "<<b;  
    }
}; 

int main() {
    employee a1,b1,c1;
    a1.getData(2,3);
    b1.getData(4,5);
    c1.setdata(a1,b1);

return 0;
}