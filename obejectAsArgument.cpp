/*Program definition: write  prfogrm to pass object as function argumment */ 

#include<iostream>
using namespace std;
class maths 
{
    int a,b;  
    public: 
    int mul(int, int);
    int display(maths q1, maths q2);
};
// Frisrtfunction
int maths:: mul(int number1, int number2)
{
    a =  number1; 
    b = number2;
    return a*b;   
} 

int maths:: display(maths q1, maths q2)
{
    int first, second;
    first = q1.a + q2.a;
    second = q1.b + q2.b;
    cout  <<first<<"\t"<<second;
    return 0;
}

int main() {
        maths a,b;        
        a.mul(2,3);
        b.mul(3,4); 
        a.display(a,b);
        //cout<<s<<" "<<k<<" "<<endl;

return 0;
}