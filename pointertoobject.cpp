/*Program definition: */ 

#include<iostream>
using namespace std;
class complex{
    int real, imagenary;  
    public: 
    int getdata()
    {
        cout<<"Real data is: "<<real<<endl;
        cout<<"imagenary value is: "<<imagenary<<endl;                  
    }
    int setdata(int a, int b)
    {   
        real = a;
        imagenary = b;
    }


}; 

int main() {
    //complex obj;
    //complex *(ptr) = &obj;

    //complex *(ptr) = new complex;  this also called method 
    complex *(ptr) = new complex;
    ptr->setdata(10,30);
    ptr->getdata();  // aero operator used at dereferencing objecter while calling function
    // Simple we can usee it as replacement of . and * derefencing operator

    //array of object
    complex *(ptr1) = new complex[3];
    ptr1->setdata(1,3); 
    ptr1 ->getdata();
    ptr1->setdata(5,4);
    ptr1->getdata();
    ptr1->setdata(3,5);
    ptr1->getdata();
    ptr1->setdata(4,1);
    ptr1->getdata();
    ptr1->setdata(2,0);
    ptr1->getdata();
    
    

return 0;
}