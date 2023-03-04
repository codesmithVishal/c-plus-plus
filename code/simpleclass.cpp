// write a program to understanding of simple program
#include<iostream>
using namespace std;  

class employee
{
    int empNo;
    char name[10];
    int salary;  
    
    public: 
        void getempdat(int, char, int);
        void putempdata();
};      

void employee ::getempdat(int A, char name, int s)
{
    empNo = A;
    name = name; 
    salary= s;
} 

void employee::putempdata()
{
    cout<<empNo<<"\t"<<name<<"\t" << salary; 

}
int main()
{
    employee a; 
    //char name[10]= "vishal";
    a.getempdat(1,"VISHAL",10000);
    a.putempdata();  
    return 0;
}