/*Program definition: Write a program to understand working of array of object */ 
#include<iostream>
using namespace std;
class employee
{
    int empNo;
    char empName[10]; 
    public: 
    void getEmpData();
    void displayEmpData();
}; // class should be end with semicolon;   
void employee::getEmpData()
{
    cout<<"Enter employee name"; 
    cin>>empNo>>empName;
}

void employee::displayEmpData()
{
    cout<<empNo<<" "<<empName<<endl;
    cout<<"---------------------"<<endl; 
    
}

//Driver fuction bhi kehte hai because its run/drive the code.  
int main() {    
    employee a[2]; //array of object 
    for (int i=0;i<2;i++)
    {
        a[i].getEmpData();      //calling function for get data 
        a[i].displayEmpData();   //calling fuction for displayData
    }
    return 0;
}