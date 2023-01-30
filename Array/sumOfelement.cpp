/*Program definition: */

#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int sum = 0;
    float average;
    // taking array as input
    cout << "Enter the element of array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    // sum
    for (int i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    average = sum / 10;
    cout << "Total of all element" << sum << endl
         << "Average of all element" << average;

    // find largest element
    int largest = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i]>largest)
        {
            largest = a[i];
        }
    }
    cout<<"largest is :  "<<largest<<endl; 
    int min = a[0];
    for (int i = 1; i < 10; i++)
    {
        if(a[i]<min)
        {
            min = a[i]; 
            // a[i]= a[i+1]; 
        }
    }
    cout<<"minimum is: "<<min<<endl; 
    return 0;
}