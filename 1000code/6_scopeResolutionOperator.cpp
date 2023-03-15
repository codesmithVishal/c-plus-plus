/*Program definition: Write a program to understand Working  of c=scope resolution operator */ 

#include<iostream>
using namespace std;
int a =  10;  
int main() {
    int a = 5;
    // cout<<a<<endl;  
    {
        int a =20; 
        //cout<<a<<endl;  
        {
            cout<<::a<<endl; // this will print value 10 insted of 20 0r 5 because 
        }

    }
return 0;
}