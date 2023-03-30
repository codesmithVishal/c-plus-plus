/*Program definition: */ 

#include<iostream>
using namespace std;
int func(int & a,  int & b) //reference  sending adress
{
    float v =  a * b;  
    return v; 
} 
 int func2(int *a, int *b) //call by reference =  sending adress 
 {
    int f  = *a+ *b; 
 }

 int func3(int a, int b) //call by value // sending copy of parameter
 {
    return a-b;
 }


int main() {
int v1 =5, v2=5; 
int v = func(v1, v2); 
int f = func2(&v1,&v2); 
cout<<v<<endl; 
cout<<f<<endl; 
cout<<func3(v1,v2);

return 0;
}