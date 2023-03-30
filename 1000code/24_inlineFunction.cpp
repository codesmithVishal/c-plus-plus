/*Program definition: program to understand inline function 
note:  An inline functions is  expanded i line when its is invoked.
compiler replace the function  call with the corresponding function code  


*/ 

#include<iostream>
using namespace std;
inline float mul(float x, float y)
{
    return (x*y); 
}

inline double div(double p, double q)
{
    return (p/q); 
    
}
int main() {    
    float a{12.5}; 
    float b{9.82}; 
    cout<<mul(a,b)<<endl;
    cout<<div(a,b)<<endl; 
return 0;
}