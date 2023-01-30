/*Program definition:
string is array of character

 */ 

#include<iostream>
#include<string>
using namespace std;
class person
{
    char name[15];
    char cast[15];
    public:
    void detail(char n1[], char  c1[])  
    {   
     for(int i=0; i<15;i++)
     {
        name[i]=n1[i];
        cast[i] = c1[i]; 
     }
    }
    
    void display()
    {
        cout<<name<<" + "<<cast; 
    }
};



int main() {
person n1; 
char na1[10] = "Vishal"; 
char na2[10] = "Hindu";
n1.detail(na1, na2);
n1.display();

return 0;
}