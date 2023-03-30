/*Program definition: Write a program to understand function overloading  */

#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
int add(int a, int b, int c, int d)
{
    return a * b * c * d;
}
int main()
{
    cout << add(5, 6)<<endl;
    cout << add(5, 6, 7)<<endl;
    cout << add(5, 6, 7, 8)<<endl;
    return 0;
}