/*Program definition:
Given the values  of varible x,y,an z, write a program to rotate their valus
such that x has the value odf y, y has valu of z  and  z has value of x.
 */

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter the value of x, y z";
    cin >> x >> y >> z;
    int temp1, temp2,temp3; 
    temp1 =x; 
    temp2=y;
    temp3 = z; 
    //----------
    x = temp2, 
    y = temp3, 
    z = temp1;
    //-----------
    cout<<"X= "<<x<<" Y= " <<y<<"Z= "<< z <<endl;

    return 0;
}