// Write a program to  display working of Inline functiob
//inline function save time in execution  but  consume  more memory space
#include<iostream>
using namespace std;
 inline int square(int);
 inline  float average(float, float);

int main()
{
     int a;
     float b;  
    a = square(5);
    b = average(10.6, 20.4);
    cout<<a<<endl<<b<<endl;  

}
inline float average(float a, float b)
    {
        return  a/b;       
    }     

 inline int square(int a)
    {
        return a*a;
    }