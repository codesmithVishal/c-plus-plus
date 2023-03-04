/*Program definition: class basic  */ 

#include<iostream>
//#include<cstring>
using namespace std; 

class student
{   
    int rollno;
    char name[15];   
    int standard;
    char divison;
    public:
    void getdata(int RL,char namevalue[],  int s, char div )
    {
        rollno =  RL;
        //strcpy(name, name);
        for(int i =0;i<15;i++)
        {
            name[i]= namevalue[i]; // pass adress of first element 
        }
        standard = s; 
        divison = div;
    }


    void display()
    {
        cout<<rollno<<" "<<name<<" "<<standard<<" "<<divison<<endl;
    }



}; //class should be end with semicolon


int main(){

    char name1[10] = "Vishal"; 
    char name2[10] = "jay"; 
    char name3[10] = "ramesh"; 
    student s1,S2,S3; 
    s1.getdata(1,name1,7,'B'); // you can not pas string litterls
    s1.display();

    S2.getdata(2, name2, 7,'A');
    S2.display();

    S3.getdata(3,name2, 8 ,'b');
    S3.display();

return 0;
}
