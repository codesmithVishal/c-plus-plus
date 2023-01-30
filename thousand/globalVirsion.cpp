/*Program definition: */ 

#include<iostream>
using namespace std;

int globe = 100; 

int main() {
    
    int globe  = 50; 
    {
        int globe = 200; 
        cout<<globe<<"\n";
        cout<<::globe<<endl; // Scope resolution Operator 
    }
return 0;
}