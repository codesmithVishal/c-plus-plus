/*Program definition: understanding the memory management */

#include <iostream>
using namespace std;

int main()
{
    int *p = new int(10);
    cout << *p << endl;
    cout << sizeof(*p);


    int *ptr = new int[10];      
    //cout<<ptr[0]<<endl;
    return 0;
}