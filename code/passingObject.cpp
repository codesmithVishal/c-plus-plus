/*Program definition: Write a program to understand  pass object as argument 
*/ 

#include<iostream>
using namespace std;

class number
{
    int a; 
    int b;  
        
    public:  
    
    void getdata(int v1,int v2){
        a= v1;
        b = v2;
    } 
    void sum(number c1, number c2)
    { 
        a  = c1.a + c2.a;   
        b  = c1.b + c2.a;    
    }

    void display()
    {
        cout<<a<< " & " <<b<<endl;
    }

};

int main() {

 number c1,c2,c3;
 c1.getdata(1,4);
 c2.getdata(1,5);  
 c3.sum(c1,c2);
 c1.display(); 
 c2.display(); 
 c3.display();

return 0;
}