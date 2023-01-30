// write a program to declare array in class  as private member 
#include<iostream>
using namespace std;


class groccery
{
    int itemno[10];
    char itemcode[10];
    int i;
    public: 
    void  funC()
    {
        for(i=0;i<10;i++)
        {
            itemno[i]= i+1;
          
        }  
         
        cout<<"Enter item 10 code:";

        for(i=0;i<10;i++)
        { 
           cin>>itemcode[i];
        }
        for(i=0;i<10;i++)
        { 
           cout<<itemno[i]<<" is "<<itemcode[i]<<endl;
        }
        
    } 

};
int main()
{

groccery g;
g.funC();

}

