// 2.1 write a program to show working of cout stream
#include<iostream>
using namespace std; 

int main()
{
    int mark1,mark2,mark3;
    int total;
    float average;
    float floatnumber =  1.23;
    cout<<"Enter marks:"<<endl;
    cin>>mark1>>mark2>>mark3;
    cout<<"maths = "<<mark1<<endl<<"physics = "<<mark2<<endl<<"science = "<<mark3<<endl; 
    total =  mark1+mark2+mark3;\
    average =  (float)total/3;
    cout<< "Total is = "<<total<<endl<<"average is = "<< average<<endl;
    cout<<floatnumber<<endl;
    return 0;
}
