/*Program definition: */ 

#include<iostream>
using namespace std;
class parent
{   
   // int a, b;  // Private cannot be inherited 
    public: 
        int c,d; 
    int getdata(int num1, int num2)
    {
        c =  num1; 
        d =  num2;
        return c*d;
    }
}; //class should be end with  semicolon 


class kid: private parent 
{
    int z;

    public:  
    kid()
    {
    
    }
    int display()
    {    
    z = getdata(4,6);
    cout<<z<<endl;
    }

    
};  // Derived class also end with semicolon

int main() {
    parent obj1; 
    int result;
    //result = obj1.getdata(10,5);
    //cout<<endl<<result;
    kid obj;
    obj.display(); 
     // can not acess ofparent class because  

    //cout<<endl<<result;
    return 0;
}