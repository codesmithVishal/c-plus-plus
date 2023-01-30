/*Program definition: */

#include <iostream>
using namespace std;

int main()
{
    int abc[10];
    int *ptr;
    int sum = 0, i;
    cout << "Enter the 10 element of array";
    for (i = 0; i < 10; i++)
    {
        cin >> abc[i];
    }
    ptr = abc;
    for (i = 0; i < 10; i++)
    {
        sum = sum+*ptr; 
        cout<<i<< "\t"<<*ptr<<"\t"<<sum <<endl; 
        ptr++;
    }
    return 0;
}