/* Write a program to find the number divisible by 5. 
logic = 
1. received 1 number from user
2. run(for) loop til that number;
3. divide each muber by 5 and modulo is 0 the  stor result in variable and print
 */
#include<iostream>
using namespace std; 

int main()
{
    int number;  
    cout<<"Enter any number:"<<endl;  
    cin>>number;
    // for loop till that number. 
    for(int i=5; i<=number; i++)  
    {     
        if(i%5==0)
        {        
            cout<<i<<endl; // print all the number divisible by 5  till enterrd number 
        }   
    }
    
    return 0;
}