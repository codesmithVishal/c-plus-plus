/*Program definition: */ 

#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public: 
    complex(void);
    int  printData();
    // Special class member with same name as class
    // return Nothing not ieven void 
    // parameterized and none parameterized
    // Same name as class
    // Automatically invoked when object of class is created
    // Initialized member when object of class is created
    
}; 
complex::complex(void)
{
    a=1; 
    b=2; 
} 
int complex::printData()
{
    cout<<a<<endl<<b; 

}
int main() {
    complex c; 
    c.printData(); 

return 0;
}