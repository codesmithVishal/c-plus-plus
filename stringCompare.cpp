/*Program definition: */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("Road");
    string s2("Read");
    string s3("Read");

    cout << "string s1:" << s1 << endl;
    cout << "string s2:" << s2 << endl;
    cout << "string s3:" << s3 << endl;

    int x1 = s1.compare(s2);

    cout << endl
         << x1;
    int x2 = s2.compare(s3);
    cout << endl
         << x2;
    if (x1 == 0)
    {
        cout << "String is equal";
    }
    else
    {
        cout<< "string is not equal";
    }
    
    int a= s1.compare(0,2,s3,0,2);
    int b= s2.compare(0,2,s1,0,2);
    int c= s2.compare(0,2,s3,0,2); 
    int d= s3.compare(s2.size()-1,1,s3,s3.size()-1,1); 

    cout<<"a="<<a<<"\n"<<"b ="<<b<<"\n";
    cout<<"c="<<c<<"\n"<<"d="<<d<<"\n"; 

    cout<<"\nbefore swap: \n"; 
    cout<<"s1 = "<<s1<<"\n"; 
    cout<<"s2 = "<<s2<<"\n"; 

    s1.swap(s2); 
    cout<<"\n After swap\n"; 
     cout<<"s1 = "<<s1<<"\n"; 
    cout<<"s2 = "<<s2<<"\n"; 


    
    return 0;
}