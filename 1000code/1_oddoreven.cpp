/*Program definition: Write a program to check wether number i odd or even  */ 

#include<iostream>
using namespace std;

int main() {
    int number1;
    cout<<"Enter any number: "<<endl; 
    cin>>number1; 
    if((number1%2)==0 )
    {
        cout<<number1<<" Number is Even"<<endl;    
    } else{
        cout<<number1<<" Number is  odd"<<endl; 
    } 

return 0;
}