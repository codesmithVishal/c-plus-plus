/* write a program to demonstrate class member function and data member 
 
  and it's concept.  

*/
#include<iostream>
using namespace std; 
 
 class car
 {
    int number; 
    char name;  
    int model;
    public:
    void getcardetail(int, char , int); 
    void displaycardetail();
};

void car::getcardetail(int a, char b, int c )
{
    number = a; 
    name = b; 
    model =  c; 

}

void car::displaycardetail()
{
    cout<<number<<endl<<name<<endl<<model<<endl;
}

int main()
{
    car a1,a2;  
    //int name[10]= {'M','a','r','u','t','i'};
    a1.getcardetail(1, 'C' , 10); 
    a2.getcardetail(2,'b',11);
    a1.displaycardetail();
    a2.displaycardetail();
    return 0;
}