/*Program definition: */

#include <iostream>
#include<string>
using namespace std;
class firstLearn
{
private:
    int roll_no[10]; 
    char name[10];    
public: 
    float percentage;
    void getStudentDetail( int a[], char b[])
    {
     
        for(int i=0; i<10; i++)
        {
            roll_no[i] = a[i]; 
            name[i] =  b[i];
        }
    } 

    void  printstudentdetail()
    {
        cout<<roll_no<<" "<<name<<" "<<percentage; 
    }
};

main()
{
    firstLearn ob;
    ob.percentage = 50.6;
    int a[10]= {1,2,3,3,4,5,6,7};
    char name[10]="Vishal"; 
    ob.getStudentDetail(a, name);
    ob.printstudentdetail();
    return 0;
}