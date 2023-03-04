/* Write a program to uderstand working of constructor 

 1) Constructor is special member function with the same name as class name; 
 2) It initialize object at time of creation and and privide value to data member; 
 3) Constructor can be invoked by just creating object, it does not require to call like l
    normal fuction
 4) Its construct the value for data member so its called constructor

Rules:
 1) It should be declared in public scope only 
 2) They are automaticaly invoked when its class object created
 3) They do not having return type, not even return void
 4) Can not be inherited 
 5) it has default argument
 6) We can not refere adress 
 7) they make "implicit call" call to delete and new operator when require to allocate and delet memory space
 8) Constructor can used as meber of union; 
*/ 

/*Program definition: */ 

#include<iostream>
using namespace std;

class calculator
{   // Data member
    int a;
    int b;
    int c;     
    public:

    calculator(); // declaration of constructor
    calculator(int , int, int); 
    int sum();  // Function 
    int Displaysum();
};  //class shold be end with semicolon 

calculator::calculator()
{
  a =5; 
  b = 5;  
  cout<<a<<" & " <<b<<endl; 
}
calculator::calculator(int x, int y, int z)
{

    a =x; 
    b =y; 
    c=z;
}

int calculator::sum()
{
    return a+b; 

}

int calculator::Displaysum()
{   int z= sum(); // Nesting of function
    cout<<a<<endl<<b<<endl<<c<<endl<<z; 
}

//driver function
int main() {
    calculator c1;

    calculator obj1(1,2,5);
    obj1.Displaysum();

    return 0;
}