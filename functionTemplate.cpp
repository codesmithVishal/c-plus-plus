/*Program definition: */ 

#include<iostream>
using namespace std;
template <class T1, class T2>
float area(T1 a, T2 b)
{
    return a*b; 
}


int main() {
    float  a1 = area(10.5, 15); 
    printf(" Tota area  is: %f ", a1); 

    
return 0;
}