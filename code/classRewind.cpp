/* Program definition: */
#include<iostream>
using namespace std;
class bycle
{
    int srNo;
    char series;  
    public:    
    void getdata();  
    void putdata();
}; // Class Must be end with semicolan  

void bycle::getdata()
{   
    cout<<"Enter srNo: "<<endl;
    cin>>srNo;
    cout<<"Enter the series";
    cin>>series;
}

void bycle::putdata()
{
    cout<<srNo<< "   "<<series; 
}

int main() {
    
bycle b; 
b.getdata(); 
b.putdata();

return 0;
}