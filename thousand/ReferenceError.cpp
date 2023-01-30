/*Program definition: */ 

#include<iostream>
using namespace std;
#define pi 3.14
int setrefernce(int &); 
int circleArea(int &);
int main() {
    int a =10; 
    cout<<setrefernce(a)<< " "; 
    cout<<circleArea(a)<< " "; 
    cout<<a<< " ";
return 0;
}
 int setrefernce(int &a) 
 {
    return a =  a+1; //*==a;
 }
 int circleArea(int & r)
{
    return r = pi*r*r;
}