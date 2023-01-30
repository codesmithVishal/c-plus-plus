/*Program definition: Write a program to print entire integer array;*/

#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int value = 0;

    for (int i = 0; i < 100; i++)
    {
        a[i] = value;
        cout << a[i] << endl;
        // if(i == 75)
        value++;
    }

    cout << " New code \n";
    int b[] = {1, 3, 5};
    for (int i = 0; i < 3; i++)
    {
        cout << b[i] << endl;
    }

    // receive Value from user
    int userEnteredValue[5]; 
    for(int i=0; i<5;i++ )
    {        
        cin>>userEnteredValue[i]; 
    }
    //Print O/P
    for(int i=0;i<5;i++)
    {
        cout<<userEnteredValue[i]<<"\t"; 
    }

    return 0;
}