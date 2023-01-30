// Write ba program to learn function overloading 
/* using same function with different  parameter for some different purpose
(1) fuction name should bes same but argumwnt and return type are different5
(2) match best possible argument and perform the task 

*/

#include<iostream>
#include<cmath> 
using namespace std;

int multiplejob(int a);
int multiplejob(int , float , float);
double  multiplejob( float , float, int);
char mulitiplejob(char); 
int main()
{
    cout<<multiplejob(40.77,50.88,5)<<endl;
    cout<<multiplejob(5, 90.5, 20.50)<<endl;    
    cout<< mulitiplejob('a')<<endl;
    cout<<multiplejob(64)<<endl;
    return 0;
}
int multiplejob(int a)
{
    int z = sqrt(a); //here use of ma1th function        
    return z;
}

int multiplejob(int num1 , float num2 , float num3)
{
    int z =  num1 + ceil(num2) + floor(num3); // math function
    return z;
}
double  multiplejob( float p, float q, int r)
{    
    for(int i = 0; i<r; i++)
    {
        if ( p >= q)
        {
        q+=p;
        return q;
        } else
        {
        p =0;
        return p;
        }
    }
}
char mulitiplejob(char achar)
{
    cout<<achar<<endl;
}