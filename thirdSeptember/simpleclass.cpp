//Writye a program to  understand simple program 
#include<iostream> 
using namespace std;
// declare class using class name; 
// item is here class name;  
class item
{    
    int  a;
    float division;    
    int sum(int a, int b)
    {        
        return a+b;
    }
    int substract(int a, int b)
    {
    return b-a; 
    }
    public: 
    int b;
    
    int outsidefunction();
    int multiple(void)
    {   
        int a,b;
        cout<<"  Enter to number:";
        cin>>a>>b;
        if (a>b)
        {    int addition = sum(a,b);
            cout<<"result is:"<< addition;
            return 0;
        }
        else
        {   int sunstraction = substract(a,b);
            cout<<"result is:"<< sunstraction   ;
            return 0;
        }
    }     
};

int item::outsidefunction()
{
    cout<<"This is out side function"<<endl;
}

   
int main()
{       
    item x;
    int a;
    x.b =10;
    x.multiple();    
    cout<<endl;
    cout<<x.b;
    cout<<endl;    
    x.outsidefunction();
    return 0;
}