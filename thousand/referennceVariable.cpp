/*Program definition: */ 

#include<iostream>
using namespace std;

int main() {
    int sum;  
    int & total = sum;
    sum = 100;  
    cout<<sum<<endl;
    cout<<" New Name"<<endl;
    cout<<total<<endl;




return 0;
}