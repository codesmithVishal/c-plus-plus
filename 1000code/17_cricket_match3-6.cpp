/*Program definition: */

#include <iostream>
using namespace std;
class crickter
{
private:
    string name;
    int totalrun;
    int matchplayed;
    int NotOut;
    int average;

public:
    crickter(string a, int run, int MP, int N)
    {
        name = a;
        totalrun = run;
        matchplayed = MP;
        NotOut = N;
    }
    int calculateAveraage()
    {
        average = totalrun / matchplayed;
    }
    void displayTable()
    {
        cout << name << "\t" << totalrun << "\t\t" << matchplayed << "\t" << NotOut << "\t" << average << endl;
    }
};

void line()
{
    cout<<"------------------------------------------------"<<endl; 
}
int main()
{
    crickter obj1("schin", 2000, 234, 24); 
    crickter obj2("sehwag", 1000, 204, 24); 
    crickter obj3("Dravid", 1500, 154, 20); 
    obj1.calculateAveraage(); 
    obj2.calculateAveraage(); 
    obj3.calculateAveraage(); 
    cout<<"Name Total Run Match Played Notout Batting Average"<<endl;
    line(); 
    obj1.displayTable(); 
    line(); 
    obj2.displayTable(); 
    line(); 
    obj3.displayTable(); 
    line(); 
    return 0;
}