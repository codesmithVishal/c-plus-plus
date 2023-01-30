/*Program definition: passing string and array as arguyment*/ 
#include<iostream>
using namespace std;
int functionString(int, char name[]); 
int main()
{
    char  name[10] = "Vishal";
    functionString(1, name);
    return 0;
}

int functionString(int a, char name[10])
{
    cout<<a<<" "<<name;
    return 0;
} 