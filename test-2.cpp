/*Program definition: */ 

#include<iostream>
using namespace std;
int a= 500; 
int main() {
    int a= 10;  
    int & alias = a; 

    cout<<a;
    alias = 20; 
 cout <<endl<<a; 
 cout<<endl<<::a;
return 0;
}