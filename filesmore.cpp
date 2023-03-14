/*Program definition: */ 

#include<iostream>
#include<fstream>

using namespace std;
int main() {
ofstream hout;
hout.open("sample1.txt");
//string name = ""; 
hout<<"Name is written is class "<<endl; 
hout<<"Name is No: "<<endl; 
hout.close();

//reading input from file; 
ifstream  hin; 
hin.open ("sample1.txt");
string st;  
while (hin.eof()==0)
{
        getline(hin,st); 
        cout<<st<<endl;  
}
hin.close(); 
return 0;
}