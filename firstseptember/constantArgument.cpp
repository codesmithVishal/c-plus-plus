//Write aprogrsm to show working of constant argumnet 

//need to learn more about const argument in function

#include<iostream>
using namespace std;

int areaofcircle(int r, const float *pi);

int main()
{
    int r;
    //taking input from user for radius
    cout<<"enter radius for circle";
    cin>> r;
    float pi = 3.14;
    int z = areaofcircle(r, &pi);
    cout<<"Area of circle is = "<< z;
}
int areaofcircle(int r, float *pi)
{
    int a= 10;
    int *pi = &a;
    return *pi*r*r;
}

