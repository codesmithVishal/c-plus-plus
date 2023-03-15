/*Program definition: Write a program that take multiple  class argument */

#include <iostream>
using namespace std;
template <class interest, class principle, class year>
class bank
{
    interest rate;
    principle amount;
    year period;

public:
    bank(interest v1, principle v2, year v3)
    {
        rate=v1;
        amount=v2;
        period=v3;
    }

    int  calculate()
    {
        int finalamount;

        finalamount = amount * rate;
        return finalamount; 
    }
    void showValue()
    {
        cout<<"Total amount is: "<< calculate()<<endl; 
    }
};
int main()
{
    bank<float, int, int> obj(4.1, 1000, 5);
   
    obj.showValue(); 

    return 0;
}