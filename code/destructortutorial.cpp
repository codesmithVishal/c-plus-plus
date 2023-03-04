/*Program definition:
Destructor is called when object is no longer require
*/

#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        ++count;
        cout << "constructor is called" << count << endl;
    }
    ~num()
    {
       --count;
        cout<<"Destructor is called" <<count<< endl;
        
    }
};

int main()
{

    cout << "This is main program" <<endl;
    cout<<"Creating first object"<<endl; 
    num a; 
    {
        cout<<" Creating second object"<<endl; 
        num b,c; 
        cout<<"closing of bracket"<<endl;
    }

    cout<<"final call"<<endl; 
    return 0;
}

