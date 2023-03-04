/*Program definition: */ 

#include<iostream>
using namespace std;

class employee{
    int empID; // You can not initialize member here, 
    int salary; 
    public: 
    int salaryCount();
    int getId();
    int setId();
}; //class should be end with semicolon;

int employee :: getId()
{
    cout<<"Enter Employye ID";
    cin>>empID;
    cout<<"Enter Salary of Employee"; 
    cin>>salary; 
}

int employee::setId()
{
    cout<< "Id is "<< empID<<endl<<" Salary "<< salary;
}



int main() {
    employee nitesh; 
    nitesh.getId(); 
    nitesh.setId(); 

return 0;
}