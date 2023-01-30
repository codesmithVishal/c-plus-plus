/*Program definition: reference variable is alias name for same variable */ 

#include<iostream>                      //inlude path 
using namespace std;
 int fuc(int &a, int &b)
 {

    int temp; 
    temp= a; 
    a =b;
    b=temp; 
    return 0; 
 
 }

int main() {
    int a,b;
    
    a=5, b=6;
    cout<<a<<" "<<b; 
    //int & ptr = a;  
    fuc(a, b);
    cout<<endl<<a<< " "<<b; 
    
    return 0;
}