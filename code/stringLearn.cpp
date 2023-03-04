/*Program definition:

-> Constructor, Member function, operator
-> Creating string
-> Reading string
-> Displaying string object
-> Finding a sub string from string
-> Modifying string object
-> Comparing string object
-> Adding string Object
-> Accessing character in a string
-> Obtaining the size of string
-> Many other operation

commonly used string constructor
constructor
String(); = for creating empty string
string (const chat*str); =  For creating a string from null - terminating string
string (const string & str); =  For creating a partial string object from other string object


Function

Append() =  To append a part of string to another string
Assign() =  To Asign a partial string
.at() = Obtains the character stored at a specific location (Important)
Begin() =   Return reference to the start of of a string
capacity() =  gives a total element that can be stored
compare()  = compare sring against the invoking string
empty( = returns true if string is emptyp; otherwise return false
end() =  Return reference to end of string
erase() = Remove character as specified
find() = Searches for the occureence of a specified;
insert() =  Inserts character at specified location
length() = find the lenght of string
max Size() =  Gives maximum possible size of a string object in a give system
replace() =  Replace specified character with a given string
resize() =  change the size of string as specified ]
size() =  gives numbers of charcter in string
Swap() =  swaps the given string with the invoking string

Operator
 =  : Assignment
 +  : Concatenation
 += : Concatenation assignment
 == : Equality
 != : Inequality
 <  : Less than
 <= : Less than equal to
 >  : greater than
 >= : Greater than equal to
 [] : subsciption
 << : Input







*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    string s2("XYZ");
    s1 = s2;
    string s3("Hello");
    s3 += s2;
    string s4(s3);
    cout << s1 << endl;
    cout << s2 << endl
         << s3 << endl
         << s4;


    return 0;
}