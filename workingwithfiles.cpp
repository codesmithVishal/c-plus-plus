/*Program definition:
 fstreambase => Class is main class for i/o operation in  file
 ofstream => for open the file for  input operationn
 object>> => reading file
object.close() =  close file 
*/

#include <iostream>
#include <fstream> // Header file  for working with files;
// fstreambase class is main class for i/o operation in  file

using namespace std;
int main()
{

    ofstream hout("sample1.txt"); // creating  special class constructor  object called
    string name;                  // Input string
    cout << "Enter your name";
    cin >> name;
    hout << name + " Is may name"; // Wrinting file in program
    hout.close();

    ifstream hin("sample1.txt"); // string
    string content;
    hin >> content;
    cout << "Content in side file is " << content;
    hin.close();

    return 0;
}