/*Program definition: */ 

#include<iostream>
using namespace std;

int main() {
    int num1, num2; 
    cout<<"Enter two numner repectively"<<endl; 
    cin>> num1>>num2;  
    if(num1>num2)
    {
        cout<<num1<< " Num is greater than "<<num2<<endl;
    }
    else{
        cout<<num2<< " Num is greater than "<<num1<<endl;
    }
return 0;
}