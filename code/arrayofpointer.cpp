/*Program definition: */

#include <iostream>
#include <string>
using namespace std;
int main()
{

    int i = 0;
   
    char *ptr[10]= {
        "books", "television", "computer", "sports"};
           
        for (i; i<10; i++)
        {   
            for(int j=0;j<10;j++)
            {
            cout<<*ptr[i]<<endl;
            } 
        }

    return 0;
}