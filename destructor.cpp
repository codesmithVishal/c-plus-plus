/*Program definition:  
Write a program to understand destructor; 
1. Destructor is use to clear the memeory which is created by constructor
2. destructor return Nothing not even void.  
3. use for memory Management 

*/ 
#include<iostream>
using namespace std;
int count  =  0;
class simple
{
    public:
    simple()
    {   count++;
        cout<<" Tis is conscructor id calling "<<count<<endl;
        
    }

    ~simple()
    {   count--;
        cout<<"Destructor is called"<<endl;         
    }
};


int main() {
    cout<<"Enter in Main program:"<<endl; 
    cout<<" Creating our first object: "<<endl;
    simple a; 
    {
        cout<<" Creating two more object"<<endl; 
        simple b,c;
        cout<<"Going out from bracket:"<<endl;
    }
    cout<<" Calling destructor";
return 0;
}