/*Program definition: */

#include <iostream>
using namespace std;
class base
{
public:
    int base1;
    void display()
    {
        cout << " Value of base 1 is: " << base1 << endl;
    }
};
class derived : public base
{
public:
    int base2;
    void display()
    {
        cout << "Value of base2 is:  " << base2 << endl;
    }
};

int main()
{
    base *base_class_costructor;
    base baseClasssObject;
    derived derivedClassObject;
    base_class_costructor = &derivedClassObject; // poniting derived class
    /* Always remenber  when you point out derived object
      with base class still it print     base class function*/
    // (*base_class_costructor0).base =  100;
    base_class_costructor->base1 = 100;
    base_class_costructor->display(); 

    derived *derived_class_pointer;
    derived_class_pointer = derived_class_pointer; 
    derived_class_pointer->base2 =400;
    derived_class_pointer->display();  
    cout<<base_class_costructor<<endl; 
    cout<<derived_class_pointer<<endl; 
    cout<<(*base_class_costructor)<<endl; 
    cout<<(*derived_class_pointer)<<endl; 


    return 0;
}