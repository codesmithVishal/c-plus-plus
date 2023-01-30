/*Program definition: 2.3 book class Exmnple  */
#include <iostream>
using namespace std;

class person
{
    char name[50];
    int age;
    public:  
    void getdata(char n[],int size ,int a); 
    void display(); 
};
void person::getdata(char n[],int size, int a )
{
    for(int i=0; i<size;i++ )
    {
        name[i] = n[i]; 
    }
    age = a; 
}

void person::display()
{
    cout<<name
    <<endl<<" "<<age; 

}
int main()
{
    char name[50]; int age; 
    cout<<"Enter name & age:"<<endl; 
    cin>>name>>age;
    // objkect of program
    person p; 
    p.getdata(name, 50, age);  
    p.display(); 
    return 0;
}