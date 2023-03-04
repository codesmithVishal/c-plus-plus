/* Program definition: */

#include <iostream>
using namespace std;
class base1
{
protected:
    int num1;

public:
    base1(int i)
    {
        num1 = i;
        cout << "Constructor base1  is called" << endl;
    }
    void  printbase1()
    {
        cout<<"Base1 constructor value for Num1: "<<num1<<endl;  
    }
};

class base2
{
protected:
    int num2;

public:
    base2(int j)
    {
        num2 = j;
        cout << "Constructor base2 ic calling" << endl;
    }
    void printbase2(){
        cout<<"Base2 constructor value for Num2: "<<num2<<endl; 
    }
};

class derived : public base1, public base2
{   
    int num3, num4;
    public:
    derived(int a,int b, int c,int d): base1(a),base2(b)
    {
        num3 =c;
        num4 = d; 
        cout<<"derived class constructor called"<<endl;

    }
    void printderivedclass()
    {
        cout<<"Value of Number3 is: "<<num3<<endl; 
        cout<<"Valu of Number4 is: "<<num4<<endl; 
    }

};


int main()
{   derived a(1,2,3,4);  
a.printbase1();
a.printbase2();
a.printderivedclass(); 
"Base1 constructor value for Num1: "<<num1<<end

    return 0;
}