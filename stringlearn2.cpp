/*Program definition: */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("12345"), s2("abcd");
    cout << "place s2 at place 4: ";
    s1.insert(4, s2);
    cout <<s1<<" "<< s2<<endl;
    string s("The name of dog is tommy");
    for (int i = 0; i <s.length(); i++)
    {
        cout<<i<<"="<<s[i]<<endl;
    }
    int X1 =s.find("na");
    cout<<endl<<X1;  
    int X2 = s.find_first_of('d');
    cout<<endl<<X2;
    int X3= s.find_last_of('o'); 
    cout<<endl<<X3; 
    cout<<"\n Retrives and print substracting TWO \n";  
    cout<<endl<<s.substr(2,3); 
    // Comparing and swaping string
    return 0;
}