/* write a program to pass array in function argumnet */
#include<iostream>
using namespace std;

int arrayfunc( char value[], int n) 
{
        for(int i =0; i<n;i++)
        {
            cout<<value[i];
        }
}
 int main()
 {
    char  value[10] = {'v','i','s','h','a','l'};
    //value[0]=1;
    //value[1]=2;
    //value[2]=3;
    //value[3]=4;
    //value[4]=5;
    //
    arrayfunc(value, 10);

    return 0;
 } 