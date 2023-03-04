/*Program definition: */

#include <iostream>
using namespace std;
class car
{
    int no;
    string name;

public:
    int price;
    int getdata(int a, string b)
    {
        no = a;
        name = b;
    }
    int putdata()
    {   
        cout<<no<<" "<<name << " "<< price;
    }

    car func(car p)
    {
        no = p.no;
    } 

};

int main()
{
    car c1, c2, c3;
    c1.price = 200000; 
    c2.price =  40000; 
    c1.getdata(10, "maruti"); 
    c2.getdata(10, "Zen"); 
    c1. putdata();
    cout<<endl;  
    c3.func(c1); 
    c2.putdata(); 
    cout<<endl;
    c3.putdata(); 



    return 0;
}