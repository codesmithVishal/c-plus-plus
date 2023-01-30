/* want to pass string in function */ 
#include<iostream>
using namespace std;

void employee( int  empNo, char * name, int Salary)
{
    cout<<empNo<<" "<<name<<" "<<Salary<< endl;
    
}


int main()
{ 

    int employeeNo, salary; 

    cout<<"Enter the employee number an salary respectivly"<<endl;
    cin>>employeeNo>>salary;

    char name [10];
    cout<<"Enter employee name:"<< endl;
    cin>>name;
    employee(employeeNo, name, salary);


    
    return 0;
}