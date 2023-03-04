/*Program definition:  
 Write a program to understand parameterized consture

 1) Constructor which take argument is called parameterized constructor1
 2) When consturctor take argument  (class-name obj ) mathod doesn't work
   need to pass actull value to costructor  (class-name obj(0,1)) 
 3) 
*/ 

#include<iostream>
using namespace std;

class calc
{
    int a, b;
    public: // Always declare constructor in public
    calc() 
    {
        a=0; b =0;
    }
    calc(int, int);
    calc sum( calc a, calc b);

    void display();

}; // class should be  end with semicolon 

calc::calc(int num1, int num2)
{
    a = num1;
    b= num2; 
}
void calc:: display()
{
    cout<<endl<<a<<" & " <<b;
}

void calc:: sum(calc b, calc c)
{
    return b.a +c.a;
}

int main() {
    calc v, b(1,4), a(5 ,4); // you can creat as many object you want // Implicit call  
   // calc a  = calc(0,1); // explicit call
    a.display();
    b.display();
    return 0;
}