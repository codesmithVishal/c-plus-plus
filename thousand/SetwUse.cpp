/*Program definition: */ 

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    char name[10]= "Vishal";  
    char work[10]= "Employee"; 
    char p_address[25]= "Olgam, Darbadiya";

    cout<<setw(20)<<name<<endl<<setw(20)<<work<<endl<<setw(20)<<p_address;




return 0;
}