/*Program definition: */

#include <iostream>
using namespace std;
class bankdeposite
{
    int year; 
    int interest;  
    int principleAmount; 
    int value; 
    public: 
    bankdeposite(int a, int b, float r )
    {
        year  =a; 
        interest = r;  
        principleAmount = b; 
        value = principleAmount; 
        for(int i = 0; i<r; i++ )    
        {
            value = value
        }
    }


public:
    price() {}
    price(int a, int b)
    {
        value = a;
        number = b;
    }

    void show()
    {
        cout << value << " " << number;
    }
};

int main()
{
    price a = price(1 ,23);
    a.show();

    return 0;
}