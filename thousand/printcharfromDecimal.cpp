/*Program definition: write a pogram to print char from decimal */ 

#include<iostream>
using namespace std;
inline int uppertolower(int a){
    return  a+32;
}
inline int lowertoupper(int a){
    return a-32;
}

int main() 
{    
    char character[10] = {'\0'}; 
    cout<<"Enter any character: "; 
    cin>>character;
    int num[10] ={0}; 
    for(int i = 0; i<10;i++)
    {
        if(int(character[i])>=65 && int(character[i])<=90)
        {
            
            //cout<<character<<" is upper case"<<endl;
            num[i] = uppertolower(int(character[i]));
            //cout<<char(num);
        }
        else if(int(character[i])>=97 && int(character[i])<=122)
         {   
            //cout<<character <<" is lower case"<<endl;
            num[i] = lowertoupper(int(character[i]));
            //cout<<char(num); 
    
        }
        else
        {
            cout<<"Wrong input";
            break;
        }
    }
    for(int i=0; i<10; i++)
    {
        cout<<char(num[i]);
    }
    //    cout<<char(a);
    return 0;
}   